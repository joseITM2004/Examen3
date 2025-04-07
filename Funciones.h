#pragma once
struct imagen
{
    float R[5][5], G[5][5], B[5][5];
};

void escarlarGrises(imagen e[], imagen &gris)
{
    struct ImagenGris
    {
        float gr[5][5];
    };
    ImagenGris im[3];
    for (int n = 0; n < 3; n++)
    {
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                im[n].gr[i][j] = (e[n].R[i][j] + e[n].G[i][j] + e[n].B[i][j]) / 3;
            }
        }
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 4; j++)
            {
                gris.R[i][j] = im[0].gr[i][j];
                gris.G[i][j] = im[1].gr[i][j];
                gris.B[i][j] = im[2].gr[i][j];
            }
        }
    }
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
        }
    }

    // inversion imagen 2
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (g.G[i][j] >= 128)
            {
                g.G[i][j] = 1;
            }
            else
            {
                g.G[i][j] = 0;
            }
        }
        // inversion imagen 3
        for (int i = 0; i < 5; i++)
        {
            for (int j = 0; j < 5; j++)
            {
                if (g.B[i][j] >= 128)
                {
                    g.B[i][j] = 1;
                }
                else
                {
                    g.B[i][j] = 0;
                }
            }
        }
    }
}