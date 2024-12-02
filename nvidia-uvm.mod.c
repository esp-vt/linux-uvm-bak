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



static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x8a35b432, "sme_me_mask" },
	{ 0x587f22d7, "devmap_managed_key" },
	{ 0x24d13dd, "request_free_mem_region" },
	{ 0x7b23607e, "nvUvmInterfaceDisableAccessCntr" },
	{ 0xcd40176d, "nvUvmInterfaceChannelDestroy" },
	{ 0xc4e605e7, "mmu_interval_notifier_remove" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xc8dcc62a, "krealloc" },
	{ 0x9a138db2, "nvUvmInterfaceQueryCaps" },
	{ 0xa78af5f3, "ioread32" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x6276af56, "migrate_device_range" },
	{ 0x611464c3, "param_ops_uint" },
	{ 0x35b55f5a, "param_ops_ulong" },
	{ 0x6fbc6a00, "radix_tree_insert" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x4bc0e431, "nvUvmInterfaceUnsetPageDirectory" },
	{ 0xec03a88a, "nvUvmInterfaceInitAccessCntrInfo" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x4a453f53, "iowrite32" },
	{ 0xe45112d9, "nvUvmInterfaceTsgDestroy" },
	{ 0x43e66ecb, "nvUvmInterfaceReleaseChannel" },
	{ 0x3aaf96ae, "vmalloc_to_page" },
	{ 0x698f6a77, "nvUvmInterfaceMemoryAllocSys" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x781d843c, "mmu_interval_read_begin" },
	{ 0x494e3393, "vm_get_page_prot" },
	{ 0x55b4744b, "nvUvmInterfaceMemoryCpuMap" },
	{ 0x8810754a, "_find_first_bit" },
	{ 0x48d88a2c, "__SCT__preempt_schedule" },
	{ 0x3b644591, "__bitmap_shift_left" },
	{ 0x381ce270, "pin_user_pages_remote" },
	{ 0x21ea5251, "__bitmap_weight" },
	{ 0x70ad75fb, "radix_tree_lookup" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89e0959d, "nvUvmInterfacePagingChannelAllocate" },
	{ 0x2c22b46f, "nvUvmInterfaceCslEncrypt" },
	{ 0x93d957a0, "dma_unmap_page_attrs" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x53569707, "this_cpu_off" },
	{ 0xcd4dcc73, "__mmap_lock_do_trace_acquire_returned" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x66061465, "fget" },
	{ 0xcf2a6966, "up" },
	{ 0xffab807, "nvUvmInterfacePmaFreePages" },
	{ 0x6fcca1a3, "nvUvmInterfacePagingChannelsMap" },
	{ 0x76b82c9, "proc_mkdir_mode" },
	{ 0xc512600d, "iommu_dev_disable_feature" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x69acdf38, "memcpy" },
	{ 0x9fff4606, "unmap_mapping_range" },
	{ 0x534759f3, "nvUvmInterfaceSetPageDirectory" },
	{ 0x4d7a107f, "nvUvmInterfaceMemoryCpuUnMap" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xd1600093, "nvUvmInterfaceOwnPageFaultIntr" },
	{ 0x942fa6aa, "nvUvmInterfacePagingChannelPushStream" },
	{ 0x1e362ae8, "pcpu_hot" },
	{ 0x96928d43, "seq_lseek" },
	{ 0xe3a125cb, "iommu_sva_bind_device" },
	{ 0x9141ff79, "__put_devmap_managed_page_refs" },
	{ 0xeca957d1, "__bitmap_and" },
	{ 0xe0bf83a3, "proc_create_data" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x3b7b486b, "handle_mm_fault" },
	{ 0xf434f068, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x7ba76164, "kmem_cache_create" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0xb000909e, "nvUvmInterfaceDupAddressSpace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x90228d60, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x9493fc86, "node_states" },
	{ 0x203a44d1, "nvUvmInterfaceGetExternalAllocPtes" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0x85c7cadd, "nvUvmInterfaceCslRotateKey" },
	{ 0x1035c7c2, "__release_region" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x2336754, "nvUvmInterfaceRegisterGpu" },
	{ 0xa22a4a6d, "get_user_pages_remote" },
	{ 0x4dd5a22c, "wake_up_process" },
	{ 0xce96a1a4, "nvUvmInterfaceP2pObjectDestroy" },
	{ 0x9ae47436, "_find_last_bit" },
	{ 0x48d99ea3, "pin_user_pages" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0xa7865dc6, "hmm_range_fault" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd408dfba, "dma_map_page_attrs" },
	{ 0xe49893bd, "nvUvmInterfaceGetNonReplayableFaults" },
	{ 0xac432e9f, "nvUvmInterfaceGetFbInfo" },
	{ 0x815f2897, "empty_zero_page" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x1000e51, "schedule" },
	{ 0xf390f6f1, "__bitmap_andnot" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x41efdeaf, "radix_tree_lookup_slot" },
	{ 0xa916b694, "strnlen" },
	{ 0x9aa104f0, "iommu_dev_enable_feature" },
	{ 0x69049cd2, "radix_tree_replace_slot" },
	{ 0x618911fc, "numa_node" },
	{ 0x9ad73756, "nvUvmInterfaceRetainChannel" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xebffc0c5, "__free_pages" },
	{ 0x123b6578, "kmem_cache_alloc" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x6b27729b, "radix_tree_gang_lookup" },
	{ 0x9f984513, "strrchr" },
	{ 0x16e297c3, "bit_wait" },
	{ 0x9ee2976a, "nvUvmInterfaceCslDecrypt" },
	{ 0xb4ebfc5, "find_vma" },
	{ 0x7bfbe5eb, "nvUvmInterfaceCslLogEncryption" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5b7e7949, "nvUvmInterfaceHasPendingNonReplayableFaults" },
	{ 0x7cd8d75e, "page_offset_base" },
	{ 0x64a6a01, "nvUvmInterfaceDestroyAccessCntrInfo" },
	{ 0x615911d7, "__bitmap_set" },
	{ 0x36e57696, "nvUvmInterfacePagingChannelsUnmap" },
	{ 0xa2dc7695, "cdev_add" },
	{ 0x46c47fb6, "__node_distance" },
	{ 0xbcb36fe4, "hugetlb_optimize_vmemmap_key" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xae7fd4f, "__task_pid_nr_ns" },
	{ 0x4ea5d10, "ksize" },
	{ 0xd43a0aa2, "vm_insert_page" },
	{ 0x4e6e4b41, "radix_tree_delete" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x98378a1d, "cc_mkdec" },
	{ 0x31fb9dca, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0xb7c0f443, "sort" },
	{ 0x47f3f39, "unlock_page" },
	{ 0x27491fbc, "nvUvmInterfaceStopChannel" },
	{ 0xfd1bc8ba, "get_mem_cgroup_from_mm" },
	{ 0x1b556dea, "nvUvmInterfaceCslQueryMessagePool" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0x7c173634, "__bitmap_complement" },
	{ 0xbef3c5d7, "nvUvmInterfaceTogglePrefetchFaults" },
	{ 0x1ebf5deb, "nvUvmInterfaceDestroyFaultInfo" },
	{ 0x6626afca, "down" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0xb759d51b, "nvUvmInterfaceCslInitContext" },
	{ 0x7f03ef2d, "nvUvmInterfaceMemoryAllocFB" },
	{ 0x7f450da8, "nvUvmInterfaceDeinitCslContext" },
	{ 0x7ca134dc, "migrate_vma_setup" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6e763c78, "migrate_vma_pages" },
	{ 0x1fc4c62b, "kmem_cache_free" },
	{ 0x60b7298f, "set_cpus_allowed_ptr" },
	{ 0xf7d0bcb, "dma_alloc_attrs" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x46cef371, "iommu_sva_unbind_device" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xeb1a59ab, "nvUvmInterfaceQueryCopyEnginesCaps" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x5d784826, "nvUvmInterfaceCslIncrementIv" },
	{ 0x531b604e, "__virt_addr_valid" },
	{ 0x3221df67, "__bitmap_subset" },
	{ 0x69eb8138, "nvUvmInterfaceReportNonReplayableFault" },
	{ 0x18294b13, "nvUvmInterfaceGetGpuInfo" },
	{ 0xf82d8f8b, "nvUvmInterfaceBindChannelResources" },
	{ 0x4c9d28b0, "phys_base" },
	{ 0xf1e046cc, "panic" },
	{ 0x15540283, "vmap" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x53a1e8d9, "_find_next_bit" },
	{ 0x1138c8e8, "nvUvmInterfaceInitFaultInfo" },
	{ 0xd15a3e1c, "nvUvmInterfaceCslRotateIv" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc0d3d03d, "kthread_stop" },
	{ 0x892a63e7, "nvUvmInterfacePagingChannelDestroy" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe9ffc063, "down_trylock" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x48d27375, "__bitmap_intersects" },
	{ 0x5e690c20, "nvUvmInterfaceDeviceCreate" },
	{ 0x7beea49b, "iommu_sva_get_pasid" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x9e683f75, "__cpu_possible_mask" },
	{ 0xa1608280, "int_active_memcg" },
	{ 0x19f28917, "nvUvmInterfaceServiceDeviceInterruptsRM" },
	{ 0xfb578fc5, "memset" },
	{ 0x84ccfdfb, "nvUvmInterfaceDeRegisterUvmOps" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0x51f732db, "nvUvmInterfaceFreeDupedHandle" },
	{ 0x2895b679, "__alloc_pages" },
	{ 0x16c39f3e, "unpin_user_page" },
	{ 0xa084749a, "__bitmap_or" },
	{ 0xe5dab1ad, "param_ops_charp" },
	{ 0x25974000, "wait_for_completion" },
	{ 0xd5057c22, "nvUvmInterfaceMemoryFree" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x71de450f, "nvUvmInterfaceTsgAllocate" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0x5a996bca, "find_vma_intersection" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x7e5c9cbd, "migrate_device_finalize" },
	{ 0xece784c2, "rb_first" },
	{ 0x9e3a3ffd, "proc_remove" },
	{ 0xb3687850, "out_of_line_wait_on_bit_lock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0x1ab911b4, "__mmdrop" },
	{ 0x8142e62c, "kthread_create_on_node" },
	{ 0x7e17b1c0, "set_page_dirty" },
	{ 0x90df6793, "nvUvmInterfacePmaRegisterEvictionCallbacks" },
	{ 0xde627780, "pv_ops" },
	{ 0x58458b2, "__mmap_lock_do_trace_start_locking" },
	{ 0xb997da3e, "seq_read" },
	{ 0x922f45a6, "__bitmap_clear" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf18befa3, "dma_free_attrs" },
	{ 0xa452244c, "nvUvmInterfaceGetEccInfo" },
	{ 0x999e8297, "vfree" },
	{ 0xdf521442, "_find_next_zero_bit" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc6950e1b, "mmput" },
	{ 0x93e4365f, "memremap_pages" },
	{ 0xf7419bbb, "nvUvmInterfaceP2pObjectCreate" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x710977d6, "nvUvmInterfaceGetChannelResourcePtes" },
	{ 0x156682e3, "param_ops_bool" },
	{ 0x7cd9fd0a, "migrate_device_pages" },
	{ 0xc1f02f56, "nvUvmInterfaceCslSign" },
	{ 0x8f20a831, "migrate_vma_finalize" },
	{ 0xe95ac1f, "alloc_pages" },
	{ 0x525172f0, "nvUvmInterfaceGetPmaObject" },
	{ 0x2dc671f2, "__tracepoint_mmap_lock_start_locking" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x33f4ef67, "__folio_put" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x8195040b, "__mmu_notifier_register" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb6400c9b, "seq_printf" },
	{ 0xdf5593ac, "__mmap_lock_do_trace_released" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc3385e21, "nvUvmInterfaceSessionDestroy" },
	{ 0xd18cb4c2, "nvUvmInterfaceDupMemory" },
	{ 0x78ba08fc, "nvUvmInterfaceDeviceDestroy" },
	{ 0xd9b60cd6, "nvUvmInterfaceFlushReplayableFaultBuffer" },
	{ 0xe701a2bb, "nvUvmInterfaceAddressSpaceCreate" },
	{ 0xaa9c1109, "nvUvmInterfaceUnregisterGpu" },
	{ 0x18888d00, "downgrade_write" },
	{ 0x385b88e0, "__folio_lock" },
	{ 0xa62da25a, "nvUvmInterfaceAddressSpaceDestroy" },
	{ 0xaa42d6dd, "mmu_interval_notifier_insert" },
	{ 0x52cb37dc, "single_release" },
	{ 0x550cc5f7, "nvUvmInterfaceRegisterUvmCallbacks" },
	{ 0xccdb149b, "nvUvmInterfacePmaPinPages" },
	{ 0x362f9a8, "__x86_indirect_thunk_r12" },
	{ 0xa4191c0b, "memset_io" },
	{ 0x59ffeca6, "kmalloc_trace" },
	{ 0xb783c89d, "nvUvmInterfaceChannelAllocate" },
	{ 0x46a0aa1d, "nvUvmInterfaceGetP2PCaps" },
	{ 0x68da4fcb, "nvUvmInterfaceEnableAccessCntr" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x76ae0f42, "zone_device_page_init" },
	{ 0x14c5fab1, "proc_symlink" },
	{ 0x77358855, "iomem_resource" },
	{ 0x10f15c4d, "memunmap_pages" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0xb35af14c, "param_ops_int" },
	{ 0xaad0ae78, "__bitmap_shift_right" },
	{ 0xd427b70e, "single_open" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x30aeb11d, "nvUvmInterfacePmaUnregisterEvictionCallbacks" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x53b954a2, "up_read" },
	{ 0x246cbff7, "nvUvmInterfaceDupAllocation" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xd4ec10e6, "BUG_func" },
	{ 0x45d246da, "node_to_cpumask_map" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4ca663e, "nvUvmInterfacePmaAllocPages" },
	{ 0x5c658724, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa63b4eed, "kmalloc_caches" },
	{ 0xd58dd2b1, "cdev_del" },
	{ 0x2efe8e7c, "make_device_exclusive_range" },
	{ 0x582ba89d, "address_space_init_once" },
	{ 0xe5ba279e, "kmem_cache_destroy" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x4e8f828, "mtree_load" },
	{ 0xbd9bc90d, "nvUvmInterfaceSessionCreate" },
	{ 0xf079b8f9, "module_layout" },
};

MODULE_INFO(depends, "nvidia");


MODULE_INFO(srcversion, "354ED612FBDC03B51F475E6");