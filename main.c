//main.c

#include 		"fft.h"
#include        <stdio.h>
#include        <math.h>


#define DO_FFT	1



//number of points
#define N       (1<<M)

fixed real[N], imag[N];

 
int main()
{
    int i;

    for(i=0; i<N; i++)
    {
        real[i] = 1000*cos(i*2*3.1415926535/N);
        imag[i] = 0;
    }
    
    printf("\nInput Data\n");
    for (i=0; i<N; i++)
    {
    	printf("%d: %d, %d\n", i, real[i], imag[i]);
    }
                                                                   
    //FFT_DIT
    fix_fft_DIT(real, imag, M, 0);

    printf("\nFFT_DIT\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    }
	
    
/*     //IFFT_DIT
    fix_fft_DIT(real, imag, M, 1);
    
    printf("\nIFFT DIT\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    } */


/*     //FFT_DIF
    for(i=0; i<N; i++)
    {
        real[i] = 1000*cos(i*2*3.1415926535/N);
        imag[i] = 0;
    }
    fix_fft_DIF(real, imag, M, 0);

    printf("\nFFT_DIF\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    } */


/*     //IFFT_DIF
    fix_fft_DIF(real, imag, M, 1);
    
    printf("\nIFFT DIF\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    } */

    //FFT_DIT_TIE
    for(i=0; i<N; i++)
    {
        real[i] = 1000*cos(i*2*3.1415926535/N);
        imag[i] = 0;
    }
    fix_fft_DIT_TIE(real, imag, M, 0);

    printf("\nFFT_DIT_TIE\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    }


    //IFFT_DIF
/*     fix_fft_DIF(real, imag, M, 1);
    
    printf("\nIFFT DIF\n");
    for (i=0; i<N; i++)
    {
        printf("%d: %d, %d\n", i, real[i], imag[i]);
    } */

    return 0;
}

