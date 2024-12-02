#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/export-internal.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

#ifdef CONFIG_UNWINDER_ORC
#include <asm/orc_header.h>
ORC_HEADER;
#endif

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

KSYMTAB_FUNC(nvidia_p2p_init_mapping, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_destroy_mapping, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_get_pages, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_get_pages_persistent, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_free_page_table, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_put_pages, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_put_pages_persistent, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_dma_map_pages, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_dma_unmap_pages, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_free_dma_mapping, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_register_rsync_driver, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_unregister_rsync_driver, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_get_rsync_registers, "_gpl", "");
KSYMTAB_FUNC(nvidia_p2p_put_rsync_registers, "_gpl", "");
KSYMTAB_FUNC(nvidia_get_rm_ops, "", "");
KSYMTAB_FUNC(nvidia_register_error_cb, "", "");
KSYMTAB_FUNC(nvidia_unregister_error_cb, "", "");
KSYMTAB_FUNC(nvUvmInterfaceRegisterGpu, "", "");
KSYMTAB_FUNC(nvUvmInterfaceUnregisterGpu, "", "");
KSYMTAB_FUNC(nvUvmInterfaceSessionCreate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceSessionDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDeviceCreate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDeviceDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDupAddressSpace, "", "");
KSYMTAB_FUNC(nvUvmInterfaceAddressSpaceCreate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceAddressSpaceDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceMemoryAllocFB, "", "");
KSYMTAB_FUNC(nvUvmInterfaceMemoryAllocSys, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetP2PCaps, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetPmaObject, "", "");
KSYMTAB_FUNC(nvUvmInterfacePmaRegisterEvictionCallbacks, "", "");
KSYMTAB_FUNC(nvUvmInterfacePmaUnregisterEvictionCallbacks, "", "");
KSYMTAB_FUNC(nvUvmInterfacePmaAllocPages, "", "");
KSYMTAB_FUNC(nvUvmInterfacePmaPinPages, "", "");
KSYMTAB_FUNC(nvUvmInterfaceMemoryFree, "", "");
KSYMTAB_FUNC(nvUvmInterfacePmaFreePages, "", "");
KSYMTAB_FUNC(nvUvmInterfaceMemoryCpuMap, "", "");
KSYMTAB_FUNC(nvUvmInterfaceMemoryCpuUnMap, "", "");
KSYMTAB_FUNC(nvUvmInterfaceTsgAllocate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceTsgDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceChannelAllocate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceChannelDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceQueryCaps, "", "");
KSYMTAB_FUNC(nvUvmInterfaceQueryCopyEnginesCaps, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetGpuInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceServiceDeviceInterruptsRM, "", "");
KSYMTAB_FUNC(nvUvmInterfaceSetPageDirectory, "", "");
KSYMTAB_FUNC(nvUvmInterfaceUnsetPageDirectory, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDupAllocation, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDupMemory, "", "");
KSYMTAB_FUNC(nvUvmInterfaceFreeDupedHandle, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetFbInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetEccInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceOwnPageFaultIntr, "", "");
KSYMTAB_FUNC(nvUvmInterfaceInitFaultInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceInitAccessCntrInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceEnableAccessCntr, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDestroyFaultInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceHasPendingNonReplayableFaults, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetNonReplayableFaults, "", "");
KSYMTAB_FUNC(nvUvmInterfaceFlushReplayableFaultBuffer, "", "");
KSYMTAB_FUNC(nvUvmInterfaceTogglePrefetchFaults, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDestroyAccessCntrInfo, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDisableAccessCntr, "", "");
KSYMTAB_FUNC(nvUvmInterfaceRegisterUvmCallbacks, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDeRegisterUvmOps, "", "");
KSYMTAB_FUNC(nvUvmInterfaceP2pObjectCreate, "", "");
KSYMTAB_FUNC(nvUvmInterfaceP2pObjectDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetExternalAllocPtes, "", "");
KSYMTAB_FUNC(nvUvmInterfaceRetainChannel, "", "");
KSYMTAB_FUNC(nvUvmInterfaceBindChannelResources, "", "");
KSYMTAB_FUNC(nvUvmInterfaceReleaseChannel, "", "");
KSYMTAB_FUNC(nvUvmInterfaceStopChannel, "", "");
KSYMTAB_FUNC(nvUvmInterfaceGetChannelResourcePtes, "", "");
KSYMTAB_FUNC(nvUvmInterfaceReportNonReplayableFault, "", "");
KSYMTAB_FUNC(nvUvmInterfacePagingChannelAllocate, "", "");
KSYMTAB_FUNC(nvUvmInterfacePagingChannelDestroy, "", "");
KSYMTAB_FUNC(nvUvmInterfacePagingChannelsMap, "", "");
KSYMTAB_FUNC(nvUvmInterfacePagingChannelsUnmap, "", "");
KSYMTAB_FUNC(nvUvmInterfacePagingChannelPushStream, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslInitContext, "", "");
KSYMTAB_FUNC(nvUvmInterfaceDeinitCslContext, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslRotateKey, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslRotateIv, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslEncrypt, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslDecrypt, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslSign, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslQueryMessagePool, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslIncrementIv, "", "");
KSYMTAB_FUNC(nvUvmInterfaceCslLogEncryption, "", "");

SYMBOL_CRC(nvidia_p2p_init_mapping, 0x45bb0ad7, "_gpl");
SYMBOL_CRC(nvidia_p2p_destroy_mapping, 0x180f4b6a, "_gpl");
SYMBOL_CRC(nvidia_p2p_get_pages, 0x5b3f3e79, "_gpl");
SYMBOL_CRC(nvidia_p2p_get_pages_persistent, 0x970adefe, "_gpl");
SYMBOL_CRC(nvidia_p2p_free_page_table, 0xf42ca687, "_gpl");
SYMBOL_CRC(nvidia_p2p_put_pages, 0x642487ac, "_gpl");
SYMBOL_CRC(nvidia_p2p_put_pages_persistent, 0xacdf3914, "_gpl");
SYMBOL_CRC(nvidia_p2p_dma_map_pages, 0x1695ca38, "_gpl");
SYMBOL_CRC(nvidia_p2p_dma_unmap_pages, 0x88d47c36, "_gpl");
SYMBOL_CRC(nvidia_p2p_free_dma_mapping, 0x12a2e9b0, "_gpl");
SYMBOL_CRC(nvidia_p2p_register_rsync_driver, 0x69686b5b, "_gpl");
SYMBOL_CRC(nvidia_p2p_unregister_rsync_driver, 0xa12bd5f7, "_gpl");
SYMBOL_CRC(nvidia_p2p_get_rsync_registers, 0x69bbcc13, "_gpl");
SYMBOL_CRC(nvidia_p2p_put_rsync_registers, 0xd3c43b87, "_gpl");
SYMBOL_CRC(nvidia_get_rm_ops, 0x193c3c08, "");
SYMBOL_CRC(nvidia_register_error_cb, 0x6a1dcef1, "");
SYMBOL_CRC(nvidia_unregister_error_cb, 0x03d46922, "");
SYMBOL_CRC(nvUvmInterfaceRegisterGpu, 0x02336754, "");
SYMBOL_CRC(nvUvmInterfaceUnregisterGpu, 0xaa9c1109, "");
SYMBOL_CRC(nvUvmInterfaceSessionCreate, 0xbd9bc90d, "");
SYMBOL_CRC(nvUvmInterfaceSessionDestroy, 0xc3385e21, "");
SYMBOL_CRC(nvUvmInterfaceDeviceCreate, 0x5e690c20, "");
SYMBOL_CRC(nvUvmInterfaceDeviceDestroy, 0x78ba08fc, "");
SYMBOL_CRC(nvUvmInterfaceDupAddressSpace, 0xb000909e, "");
SYMBOL_CRC(nvUvmInterfaceAddressSpaceCreate, 0xe701a2bb, "");
SYMBOL_CRC(nvUvmInterfaceAddressSpaceDestroy, 0xa62da25a, "");
SYMBOL_CRC(nvUvmInterfaceMemoryAllocFB, 0x7f03ef2d, "");
SYMBOL_CRC(nvUvmInterfaceMemoryAllocSys, 0x698f6a77, "");
SYMBOL_CRC(nvUvmInterfaceGetP2PCaps, 0x46a0aa1d, "");
SYMBOL_CRC(nvUvmInterfaceGetPmaObject, 0x525172f0, "");
SYMBOL_CRC(nvUvmInterfacePmaRegisterEvictionCallbacks, 0x90df6793, "");
SYMBOL_CRC(nvUvmInterfacePmaUnregisterEvictionCallbacks, 0x30aeb11d, "");
SYMBOL_CRC(nvUvmInterfacePmaAllocPages, 0x04ca663e, "");
SYMBOL_CRC(nvUvmInterfacePmaPinPages, 0xccdb149b, "");
SYMBOL_CRC(nvUvmInterfaceMemoryFree, 0xd5057c22, "");
SYMBOL_CRC(nvUvmInterfacePmaFreePages, 0x0ffab807, "");
SYMBOL_CRC(nvUvmInterfaceMemoryCpuMap, 0x55b4744b, "");
SYMBOL_CRC(nvUvmInterfaceMemoryCpuUnMap, 0x4d7a107f, "");
SYMBOL_CRC(nvUvmInterfaceTsgAllocate, 0x71de450f, "");
SYMBOL_CRC(nvUvmInterfaceTsgDestroy, 0xe45112d9, "");
SYMBOL_CRC(nvUvmInterfaceChannelAllocate, 0xb783c89d, "");
SYMBOL_CRC(nvUvmInterfaceChannelDestroy, 0xcd40176d, "");
SYMBOL_CRC(nvUvmInterfaceQueryCaps, 0x9a138db2, "");
SYMBOL_CRC(nvUvmInterfaceQueryCopyEnginesCaps, 0xeb1a59ab, "");
SYMBOL_CRC(nvUvmInterfaceGetGpuInfo, 0x18294b13, "");
SYMBOL_CRC(nvUvmInterfaceServiceDeviceInterruptsRM, 0x19f28917, "");
SYMBOL_CRC(nvUvmInterfaceSetPageDirectory, 0x534759f3, "");
SYMBOL_CRC(nvUvmInterfaceUnsetPageDirectory, 0x4bc0e431, "");
SYMBOL_CRC(nvUvmInterfaceDupAllocation, 0x246cbff7, "");
SYMBOL_CRC(nvUvmInterfaceDupMemory, 0xd18cb4c2, "");
SYMBOL_CRC(nvUvmInterfaceFreeDupedHandle, 0x51f732db, "");
SYMBOL_CRC(nvUvmInterfaceGetFbInfo, 0xac432e9f, "");
SYMBOL_CRC(nvUvmInterfaceGetEccInfo, 0xa452244c, "");
SYMBOL_CRC(nvUvmInterfaceOwnPageFaultIntr, 0xd1600093, "");
SYMBOL_CRC(nvUvmInterfaceInitFaultInfo, 0x1138c8e8, "");
SYMBOL_CRC(nvUvmInterfaceInitAccessCntrInfo, 0xec03a88a, "");
SYMBOL_CRC(nvUvmInterfaceEnableAccessCntr, 0x68da4fcb, "");
SYMBOL_CRC(nvUvmInterfaceDestroyFaultInfo, 0x1ebf5deb, "");
SYMBOL_CRC(nvUvmInterfaceHasPendingNonReplayableFaults, 0x5b7e7949, "");
SYMBOL_CRC(nvUvmInterfaceGetNonReplayableFaults, 0xe49893bd, "");
SYMBOL_CRC(nvUvmInterfaceFlushReplayableFaultBuffer, 0xd9b60cd6, "");
SYMBOL_CRC(nvUvmInterfaceTogglePrefetchFaults, 0xbef3c5d7, "");
SYMBOL_CRC(nvUvmInterfaceDestroyAccessCntrInfo, 0x064a6a01, "");
SYMBOL_CRC(nvUvmInterfaceDisableAccessCntr, 0x7b23607e, "");
SYMBOL_CRC(nvUvmInterfaceRegisterUvmCallbacks, 0x550cc5f7, "");
SYMBOL_CRC(nvUvmInterfaceDeRegisterUvmOps, 0x84ccfdfb, "");
SYMBOL_CRC(nvUvmInterfaceP2pObjectCreate, 0xf7419bbb, "");
SYMBOL_CRC(nvUvmInterfaceP2pObjectDestroy, 0xce96a1a4, "");
SYMBOL_CRC(nvUvmInterfaceGetExternalAllocPtes, 0x203a44d1, "");
SYMBOL_CRC(nvUvmInterfaceRetainChannel, 0x9ad73756, "");
SYMBOL_CRC(nvUvmInterfaceBindChannelResources, 0xf82d8f8b, "");
SYMBOL_CRC(nvUvmInterfaceReleaseChannel, 0x43e66ecb, "");
SYMBOL_CRC(nvUvmInterfaceStopChannel, 0x27491fbc, "");
SYMBOL_CRC(nvUvmInterfaceGetChannelResourcePtes, 0x710977d6, "");
SYMBOL_CRC(nvUvmInterfaceReportNonReplayableFault, 0x69eb8138, "");
SYMBOL_CRC(nvUvmInterfacePagingChannelAllocate, 0x89e0959d, "");
SYMBOL_CRC(nvUvmInterfacePagingChannelDestroy, 0x892a63e7, "");
SYMBOL_CRC(nvUvmInterfacePagingChannelsMap, 0x6fcca1a3, "");
SYMBOL_CRC(nvUvmInterfacePagingChannelsUnmap, 0x36e57696, "");
SYMBOL_CRC(nvUvmInterfacePagingChannelPushStream, 0x942fa6aa, "");
SYMBOL_CRC(nvUvmInterfaceCslInitContext, 0xb759d51b, "");
SYMBOL_CRC(nvUvmInterfaceDeinitCslContext, 0x7f450da8, "");
SYMBOL_CRC(nvUvmInterfaceCslRotateKey, 0x85c7cadd, "");
SYMBOL_CRC(nvUvmInterfaceCslRotateIv, 0xd15a3e1c, "");
SYMBOL_CRC(nvUvmInterfaceCslEncrypt, 0x2c22b46f, "");
SYMBOL_CRC(nvUvmInterfaceCslDecrypt, 0x9ee2976a, "");
SYMBOL_CRC(nvUvmInterfaceCslSign, 0xc1f02f56, "");
SYMBOL_CRC(nvUvmInterfaceCslQueryMessagePool, 0x1b556dea, "");
SYMBOL_CRC(nvUvmInterfaceCslIncrementIv, 0x5d784826, "");
SYMBOL_CRC(nvUvmInterfaceCslLogEncryption, 0x7bfbe5eb, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x91e3c4e6, "crypto_destroy_tfm" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x735e6a81, "acpi_evaluate_integer" },
	{ 0xc631580a, "console_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1000e51, "schedule" },
	{ 0x536221b7, "request_firmware" },
	{ 0x459fa94a, "pci_unregister_driver" },
	{ 0x1cd8438b, "pxm_to_node" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xa18be03a, "dma_sync_single_for_cpu" },
	{ 0x154af816, "iov_iter_kvec" },
	{ 0xce6ea4d6, "pci_write_config_byte" },
	{ 0xf0b53229, "crypto_shash_update" },
	{ 0xea5177d3, "pci_find_capability" },
	{ 0x90228d60, "__tracepoint_mmap_lock_released" },
	{ 0x946ba11a, "crypto_alloc_aead" },
	{ 0x63f835ba, "on_each_cpu_cond_mask" },
	{ 0xe6fc374e, "pci_clear_master" },
	{ 0x1fc4c62b, "kmem_cache_free" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x1e6d26a8, "strstr" },
	{ 0xd43a0aa2, "vm_insert_page" },
	{ 0x7044858c, "pci_dev_put" },
	{ 0xfcbfec70, "add_memory_driver_managed" },
	{ 0x8b94c729, "pci_read_config_word" },
	{ 0x8d47fc98, "crypto_aead_decrypt" },
	{ 0x57bc19d2, "down_write" },
	{ 0xcd4dcc73, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xdf8c695a, "__ndelay" },
	{ 0xba1aa243, "pci_release_regions" },
	{ 0x349cba85, "strchr" },
	{ 0xbc0f1ae9, "pci_request_regions" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x5af8e41a, "pci_get_domain_bus_and_slot" },
	{ 0x75871f5e, "acpi_get_next_object" },
	{ 0x9305f8e6, "cpufreq_get" },
	{ 0xa4e97037, "seq_read_iter" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x5f5c6c28, "dma_map_resource" },
	{ 0x5a921311, "strncmp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xb605188a, "dma_ops" },
	{ 0x6cb221f5, "sg_alloc_table_from_pages_segment" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x58458b2, "__mmap_lock_do_trace_start_locking" },
	{ 0xa916b694, "strnlen" },
	{ 0x43babd19, "sg_init_one" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0xb6fde909, "close_fd" },
	{ 0x9493fc86, "node_states" },
	{ 0x582ba89d, "address_space_init_once" },
	{ 0x9e3a3ffd, "proc_remove" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xe0bf83a3, "proc_create_data" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xb35af14c, "param_ops_int" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda4fc35d, "pci_bus_type" },
	{ 0x8c78cf7, "offline_and_remove_memory" },
	{ 0xd0760fc0, "kfree_sensitive" },
	{ 0x2cf0c910, "sg_init_table" },
	{ 0x6128b5fc, "__printk_ratelimit" },
	{ 0x81e6b37f, "dmi_get_system_info" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x9141ff79, "__put_devmap_managed_page_refs" },
	{ 0xd72c74d1, "pci_set_master" },
	{ 0xe2964344, "__wake_up" },
	{ 0x87d8b9b6, "vmf_insert_pfn_prot" },
	{ 0x66bc4897, "dma_set_mask" },
	{ 0x4302d0eb, "free_pages" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x3aaf96ae, "vmalloc_to_page" },
	{ 0x94aa7ed4, "crypto_shash_final" },
	{ 0xceb1f126, "mpi_read_raw_data" },
	{ 0xbdd30ea2, "pci_ats_supported" },
	{ 0xfcdc346e, "pci_save_state" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xccc46fc3, "hv_get_isolation_type" },
	{ 0x2fb7e813, "dma_map_sg_attrs" },
	{ 0x69acdf38, "memcpy" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x7483dc59, "pci_dev_present" },
	{ 0xfcc1edd3, "memory_block_size_bytes" },
	{ 0xe769b11c, "iterate_fd" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0x7039f23d, "pid_vnr" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xde80cd09, "ioremap" },
	{ 0x96928d43, "seq_lseek" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x5eaea17e, "kernel_read" },
	{ 0xb19a5453, "__per_cpu_offset" },
	{ 0x18833192, "filp_open" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xf1e046cc, "panic" },
	{ 0x5e4e0f5c, "set_page_dirty_lock" },
	{ 0x1863e418, "dma_buf_put" },
	{ 0xd427b70e, "single_open" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0xb6400c9b, "seq_printf" },
	{ 0xc0d3d03d, "kthread_stop" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x2895b679, "__alloc_pages" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd955afa6, "hrtimer_start_range_ns" },
	{ 0x93d957a0, "dma_unmap_page_attrs" },
	{ 0xf07a4d3a, "module_put" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x668b19a1, "down_read" },
	{ 0x6087bb07, "dma_sync_single_for_device" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x48879f20, "hrtimer_init" },
	{ 0x22bfdb54, "pci_enable_atomic_ops_to_root" },
	{ 0x365acda7, "set_normalized_timespec64" },
	{ 0x6626afca, "down" },
	{ 0x85df9b6c, "strsep" },
	{ 0x7ba76164, "kmem_cache_create" },
	{ 0xfb578fc5, "memset" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x26e298e0, "unregister_memory_notifier" },
	{ 0x4a5e4717, "fd_install" },
	{ 0x37b8b39e, "screen_info" },
	{ 0x37a0cba, "kfree" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x66061465, "fget" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0xa76b31a2, "crypto_ecdh_shared_secret" },
	{ 0x933b7401, "get_task_pid" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0xcf2a6966, "up" },
	{ 0x46cf10eb, "cachemode2protval" },
	{ 0x68942dff, "pci_get_class" },
	{ 0xdbb5a057, "pcie_capability_read_word" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x5c658724, "cdev_init" },
	{ 0x2ebf48d3, "crypto_shash_import" },
	{ 0x2d42b731, "filp_close" },
	{ 0x2dc671f2, "__tracepoint_mmap_lock_start_locking" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x1035c7c2, "__release_region" },
	{ 0x1c96d5a4, "i2c_add_adapter" },
	{ 0xab65ed80, "set_memory_uc" },
	{ 0x77358855, "iomem_resource" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0x98503a63, "mpi_alloc" },
	{ 0x56470118, "__warn_printk" },
	{ 0x48d99ea3, "pin_user_pages" },
	{ 0xf26f93b9, "pci_iomap" },
	{ 0x1b36e3d2, "device_property_read_u64_array" },
	{ 0xfbfef53e, "crypto_alloc_akcipher" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa2dc7695, "cdev_add" },
	{ 0xe914e41e, "strcpy" },
	{ 0x170ddf79, "acpi_install_notify_handler" },
	{ 0xd67eae7c, "boot_cpu_data" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xa9120245, "try_module_get" },
	{ 0xe5ba279e, "kmem_cache_destroy" },
	{ 0xce6fe336, "set_pages_array_uc" },
	{ 0x587b0954, "kvasprintf" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xd6315f31, "ecc_gen_privkey" },
	{ 0xc8c85086, "sg_free_table" },
	{ 0xc5856d61, "pm_vt_switch_unregister" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x188a1647, "ecc_is_pubkey_valid_full" },
	{ 0x63a4bd83, "pci_iounmap" },
	{ 0x742578a5, "wait_for_random_bytes" },
	{ 0x38c03d42, "dma_buf_fd" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9e802169, "pci_read_config_byte" },
	{ 0x4dd5a22c, "wake_up_process" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xa6257a2f, "complete" },
	{ 0x92d5838e, "request_threaded_irq" },
	{ 0x7eea260e, "pci_assign_unassigned_bus_resources" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0xf18befa3, "dma_free_attrs" },
	{ 0x3c69962, "dma_buf_get" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x19eca0d9, "crypto_aead_encrypt" },
	{ 0x8142e62c, "kthread_create_on_node" },
	{ 0x52cb37dc, "single_release" },
	{ 0xfbe215e4, "sg_next" },
	{ 0x8ba0a74b, "is_acpi_device_node" },
	{ 0xebffc0c5, "__free_pages" },
	{ 0x4870b582, "pci_write_config_word" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0xdfe79b07, "pci_read_config_dword" },
	{ 0xa770832, "register_memory_notifier" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x4a666d56, "hrtimer_cancel" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xae109a51, "public_key_verify_signature" },
	{ 0xf434f068, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x618911fc, "numa_node" },
	{ 0x148653, "vsnprintf" },
	{ 0x33f4ef67, "__folio_put" },
	{ 0x5a996bca, "find_vma_intersection" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0xd58dd2b1, "cdev_del" },
	{ 0x9fe939e1, "mpi_powm" },
	{ 0xece784c2, "rb_first" },
	{ 0xe6b915b7, "dma_unmap_resource" },
	{ 0xf7d0bcb, "dma_alloc_attrs" },
	{ 0xe40c37ea, "down_write_trylock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x27439fe9, "pci_enable_msix_range" },
	{ 0x86b48749, "pci_write_config_dword" },
	{ 0xd6eaaea1, "full_name_hash" },
	{ 0x9fff4606, "unmap_mapping_range" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xb10fc19e, "ecc_get_curve" },
	{ 0x556422b3, "ioremap_cache" },
	{ 0xca00c684, "crypto_shash_export" },
	{ 0x123b6578, "kmem_cache_alloc" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0xe5dab1ad, "param_ops_charp" },
	{ 0x715a5ed0, "vprintk" },
	{ 0x4ea32b74, "pci_release_resource" },
	{ 0xa63b4eed, "kmalloc_caches" },
	{ 0x3e0629bc, "dev_driver_string" },
	{ 0xced2c048, "remove_proc_entry" },
	{ 0x75f17953, "pci_disable_msi" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0xa915b11a, "pci_disable_device" },
	{ 0x5a5a2271, "__cpu_online_mask" },
	{ 0x6f75281c, "pcibios_resource_to_bus" },
	{ 0x999e8297, "vfree" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0xfb966e60, "put_pid" },
	{ 0xa8e458b, "crypto_req_done" },
	{ 0xcab006ed, "pci_resize_resource" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x46f24e9c, "follow_pfn" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0xabdc439, "cc_platform_has" },
	{ 0xd408dfba, "dma_map_page_attrs" },
	{ 0xdfc83c, "dma_unmap_sg_attrs" },
	{ 0x91607d95, "set_memory_wb" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x9166fada, "strncpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x7fccdb61, "pci_enable_msi" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x1e362ae8, "pcpu_hot" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x58983dcb, "set_pages_array_wb" },
	{ 0x601dccbd, "pm_vt_switch_required" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x194c8e51, "dma_set_coherent_mask" },
	{ 0x4164f087, "pci_find_host_bridge" },
	{ 0x32191bb6, "crypto_shash_tfm_digest" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x2e3bcce2, "wait_for_completion_interruptible" },
	{ 0xde627780, "pv_ops" },
	{ 0x16c39f3e, "unpin_user_page" },
	{ 0x3bf17755, "mpi_read_buffer" },
	{ 0xb97911ef, "vga_set_legacy_decoding" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x4558457, "dma_buf_export" },
	{ 0x3bb4acde, "__pci_register_driver" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x689606f8, "pci_disable_msix" },
	{ 0xaf1a37e6, "pci_stop_and_remove_bus_device" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0xc1514a3b, "free_irq" },
	{ 0xfd7cd04b, "key_type_asymmetric" },
	{ 0xb997da3e, "seq_read" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x7a817773, "crypto_alloc_shash" },
	{ 0xce807a25, "up_write" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x747f3035, "i2c_del_adapter" },
	{ 0xe5ae733d, "kernel_write" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x9ec6ca96, "ktime_get_real_ts64" },
	{ 0x122c3a7e, "_printk" },
	{ 0x9f4f2aa3, "acpi_gbl_FADT" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0x76b82c9, "proc_mkdir_mode" },
	{ 0x8a35b432, "sme_me_mask" },
	{ 0xbc780795, "remap_pfn_range" },
	{ 0x94961283, "vunmap" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x754d539c, "strlen" },
	{ 0x7023bea8, "unregister_acpi_notifier" },
	{ 0x2e2b40d2, "strncat" },
	{ 0x80d5e57a, "mpi_free" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x85bd1608, "__request_region" },
	{ 0x7918d817, "memory_failure" },
	{ 0xe26e4f68, "pci_enable_device" },
	{ 0x9ed12e20, "kmalloc_large" },
	{ 0xed4ae15e, "ecc_make_pub_key" },
	{ 0xd9e06123, "pci_rebar_get_possible_sizes" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xfddeb056, "efi" },
	{ 0x59ffeca6, "kmalloc_trace" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x1e79f889, "node_data" },
	{ 0x31fb9dca, "fput" },
	{ 0xc6cbbc89, "capable" },
	{ 0x93d6dd8c, "complete_all" },
	{ 0x8e2fc743, "crypto_aead_setkey" },
	{ 0x29332499, "__x86_indirect_thunk_rsi" },
	{ 0x5322663e, "acpi_get_handle" },
	{ 0xb3f985a8, "sg_alloc_table" },
	{ 0xdf5593ac, "__mmap_lock_do_trace_released" },
	{ 0xec2b8a42, "acpi_walk_namespace" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0xd92deb6b, "acpi_evaluate_object" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0x6a5cb5ee, "__get_free_pages" },
	{ 0x1c58427f, "acpi_remove_notify_handler" },
	{ 0x15540283, "vmap" },
	{ 0xddf6ad7a, "completion_done" },
	{ 0x188ea314, "jiffies_to_timespec64" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x3c299c3c, "seq_puts" },
	{ 0x973fa82e, "register_acpi_notifier" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xedc03953, "iounmap" },
	{ 0x4fc709f1, "crypto_shash_setkey" },
	{ 0xf079b8f9, "module_layout" },
};

MODULE_INFO(depends, "ecc");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc00i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc02i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "E021EBA21ED617729128042");
