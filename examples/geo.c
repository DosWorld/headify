#include <stdio.h>
#include "geo_headify.h"

*int main(void) {
    for(int e = 0; e <= 2000; e++ ) {
        for(int a = 1; a <= e; a++ ) {
            int x = e / a;
            if(x * a == e ) {
                int b = x - a;
                if(b >= 50 && b < 100 ) {
                    int c = x + a;
                    if(c >= 0 && c <= 2000 ) {
                        int d = x / a;
                        if(d * a == x ) {
                            if(d >= 0 && d <= 2000 ) {
                                if(b + c + d + e == 2000 ) {
                                    printf("%d, %d, %d, %d, %d; %d\n", a, b, c, d, e, x); }}}}}}}}
    return 0; }
