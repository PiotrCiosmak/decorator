package com.ciosmak.decorators;

public interface DataSource
{
    void writeData(String data);

    String readData();
}
