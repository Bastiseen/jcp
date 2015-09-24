// Copyright (C) 2015  Anders Gidenstam
// License: to be defined.
package jcp.cli;

import java.io.*;
import java.util.AbstractMap.SimpleEntry;
import java.util.SortedSet;
import java.util.TreeSet;
import java.util.Random;

import cern.colt.matrix.DoubleMatrix1D;
import cern.colt.matrix.DoubleMatrix2D;

import jcp.cp.*;
import jcp.io.*;

/**
 * Higher-level tools for DataSets.
 *
 * @author anders.gidenstam(at)hb.se
 */

public class DataSetTools
{
    public static DataSet loadDataSet(String filename)
        throws IOException
    {
        return loadDataSet(filename, null);
    }

    public static DataSet loadDataSet(String filename,
                                      IConformalClassifier cc)
        throws IOException
    {
        boolean hasClassifier =
            cc != null && cc.getNonconformityFunction().getClassifier() != null;
        FileInputStream file;
        file = new FileInputStream(filename);

        DataSet dataSet =
            new libsvmReader().read
                (file,
                 // Select the desired representation. FIXME: This is ugly.
                 hasClassifier
                 ? cc.getNonconformityFunction().getClassifier().
                       nativeStorageTemplate().like2D(0, 0)
                 : new cern.colt.matrix.impl.SparseDoubleMatrix2D(0, 0));
        file.close();

        System.out.println("Loaded the dataset " + filename + " containing " +
                           dataSet.x.rows() + " instances with " +
                           dataSet.x.columns() + " attributes.");
        if (hasClassifier &&
            cc.getNonconformityFunction().getClassifier().
                getAttributeCount() > -1 &&
            dataSet.x.columns() !=
                cc.getNonconformityFunction().getClassifier().
                    getAttributeCount()) {
            System.err.println
                ("Warning: " +
                 "The number of attributes in the data set, " +
                 dataSet.x.columns() + ", " +
                 "does not match the number of attributes in the model, " +
                 cc.getNonconformityFunction().getClassifier().
                     getAttributeCount() + ".");
        }
        return dataSet;
    }

    public static
        SimpleEntry<double[],SortedSet<Double>> extractClasses(DataSet dataSet)
    {
        TreeSet<Double> classSet = new TreeSet<Double>();
        for (int r = 0; r < dataSet.x.rows(); r++) {
            if (!classSet.contains(dataSet.y[r])) {
                classSet.add(dataSet.y[r]);
            }
        }
        double[] classes = new double[classSet.size()];
        System.out.println("Classes: ");
        int i = 0;
        for (Double c : classSet.toArray(new Double[0])) {
            classes[i] = c;
            System.out.println("   " + classes[i]);
            i++;
        }
        return new SimpleEntry<double[],SortedSet<Double>>(classes, classSet);
    }
}