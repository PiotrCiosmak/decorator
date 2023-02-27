package com.ciosmak.decorators;

import java.io.*;

public class FileDataSource implements DataSource
{
    private String name;

    public FileDataSource(String name)
    {
        this.name = name;
    }

    @Override
    public void writeData(String data)
    {
        File file = new File(name);
        try (OutputStream fileOutputStream = new FileOutputStream(file))
        {
            fileOutputStream.write(data.getBytes(), 0, data.length());
        }
        catch (IOException exception)
        {
            System.out.println(exception.getMessage());
        }
    }

    @Override
    public String readData()
    {
        char[] buffer = null;
        File file = new File(name);
        try (FileReader filereader = new FileReader(file))
        {
            buffer = new char[(int) file.length()];
            filereader.read(buffer);
        }
        catch (IOException exception)
        {
            System.out.println(exception.getMessage());
        }
        return new String(buffer);
    }
}
