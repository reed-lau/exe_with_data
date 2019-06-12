#include <stdio.h>

extern const char  _binary_poem1_txt_end;
extern const char _binary_poem1_txt_start;

extern const char  _binary_poem2_txt_end;
extern const char _binary_poem2_txt_start;

int main(int argc, char *argv[]) {
    char *p, *p1;

    /* poem1 */
    printf("===============================\n");
    p = (char*)(&_binary_poem1_txt_start);
    p1 = (char*)(&_binary_poem1_txt_end);
    for (char *x = p; x < p1; ++x) {
        printf("%c", *x);
    }

    /* poem2 */
    printf("===============================\n");
    p = (char*)(&_binary_poem2_txt_start);
    p1 = (char*)(&_binary_poem2_txt_end);
    for (char *x = p; x < p1; ++x) {
        printf("%c", *x);
    }
}
