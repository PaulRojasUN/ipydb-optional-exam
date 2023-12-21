Paul Rodrigo Rojas Guerrero - 202127891-3743

Para ejecutar, abra una terminal en este directorio y ejecute los siguientes comandos para cada versión específica:


VERSIÓN SECUENCIAL

    gcc sequential.c -o sequential

    ./sequential


VERSIÓN PTHREADS

    gcc pthread_version.c -o pthread_version

    ./pthread_version


VERSIÓN STATIC OPENMP

    gcc fopenmp static_openmp_version.c -o static_openmp_version

    ./static_openmp_version


VERSIÓN DYNAMIC OPENMP

    gcc -fopenmp dynamic_openmp_version.c -o dynamic_openmp_version

    ./dynamic_openmp_version


