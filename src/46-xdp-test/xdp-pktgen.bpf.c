/* SPDX-License-Identifier: MIT */
#include "vmlinux.h"
#include <bpf/bpf_helpers.h>
#include <bpf/bpf_endian.h>

char _license[] SEC("license") = "GPL";

SEC("xdp")
int xdp_pass(struct xdp_md *ctx)
{
	return XDP_PASS;
}