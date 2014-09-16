//#include "test.h"
#include <libdxfrw0/drw_interface.h>
#include <libdxfrw0/libdxfrw.h>
#include "implementation.h"
int main(int argc, char **argv) {

    implementation *a = new implementation();
    dxfRW r(argv[1]);

    r.read(a, true);
}
