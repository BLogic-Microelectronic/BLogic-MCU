#ifndef _COMPLIANCE_TEST_H
#define _COMPLIANCE_TEST_H

#define RVMODEL_DATA_SECTION \
        .pushsection .data; \
        .global begin_signature; \
        begin_signature: \
        .fill 64, 4, 0x0; \
        .global end_signature; \
        end_signature: \
        .popsection;

#define RVMODEL_HALT \
        li gp, 1; \
        1: j 1b;

#define RVMODEL_BOOT

#define RVMODEL_DATA_BEGIN
#define RVMODEL_DATA_END

#endif
