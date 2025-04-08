#pragma once
struct imagen
{
    float R[5][5], G[5][5], B[5][5];
};

imagen escarlarGrises(imagen e[])
{
    double average=0;
    imagen escalada;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            average=e[0].R[i][j]+e[0].G[i][j]+e[0].G[i][j]+e[0].B[i][j];
            escalada.R[i][j]=average;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            average=e[1].R[i][j]+e[1].G[i][j]+e[1].G[i][j]+e[1].B[i][j];
            escalada.G[i][j]=average;
        }
    }
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            average=e[2].R[i][j]+e[2].G[i][j]+e[2].G[i][j]+e[2].B[i][j];
            escalada.B[i][j]=average;
        }
    }
    return escalada;
}

void invertirColor(imagen &g)
{
    // inversion imagen 1
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            g.R[i][j] = 255 - g.G[i][j];
        }
    }

    // inversion imagen 2
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            g.G[i][j] = 255 - g.G[i][j];
        }
    }
    // inversion imagen 3
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            g.B[i][j] = 255 - g.G[i][j];
        }
    }
}

void transformarBinario(imagen &g)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {

            g.R[i][j] =g.R[i][j]>=128?1:0 ;
            g.G[i][j]=g.R[i][j]>=128?1:0;
            g.B[i][j]=g.B[i][j]>=128?1:0;           
        }
    }

}