//
// Created by Dmitry Morozov on 06.10.2021.
//

#include <stdio.h>

void print ( const char * s ){
    printf ( "Пошел на %s \n", s );
}

int main( int argc, char * argv[] ){
    print ( "ХУЙ" );
    return 0;
}