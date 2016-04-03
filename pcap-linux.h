#ifndef pcap_linux_h
#define	pcap_linux_h

#include <pcap/pcap.h>

#ifdef __cplusplus
extern "C" {
#endif

int activate_new(pcap_t *);

#ifdef __cplusplus
}
#endif

#endif
