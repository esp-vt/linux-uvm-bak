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

KSYMTAB_FUNC(nvKmsKapiGetFunctionsTable, "", "");

SYMBOL_CRC(nvKmsKapiGetFunctionsTable, 0x19e7f00b, "");

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x18833192, "filp_open" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0x88db9f48, "__check_object_size" },
	{ 0x9e7d6bd0, "__udelay" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xec3bdc86, "backlight_device_unregister" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0xafd744c6, "__x86_indirect_thunk_rbp" },
	{ 0x3aaf96ae, "vmalloc_to_page" },
	{ 0xb0e602eb, "memmove" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa6257a2f, "complete" },
	{ 0x4c236f6f, "__x86_indirect_thunk_r15" },
	{ 0x66061465, "fget" },
	{ 0xcf2a6966, "up" },
	{ 0x76b82c9, "proc_mkdir_mode" },
	{ 0x69acdf38, "memcpy" },
	{ 0x37a0cba, "kfree" },
	{ 0x1e362ae8, "pcpu_hot" },
	{ 0x96928d43, "seq_lseek" },
	{ 0xe0bf83a3, "proc_create_data" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xe2964344, "__wake_up" },
	{ 0x148653, "vsnprintf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xc3ff38c2, "down_read_trylock" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x4dd5a22c, "wake_up_process" },
	{ 0x4482cdb, "__refrigerator" },
	{ 0x284faa6b, "__x86_indirect_thunk_r11" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0xd73653c4, "freezer_active" },
	{ 0x6b2dc060, "dump_stack" },
	{ 0x122c3a7e, "_printk" },
	{ 0x193c3c08, "nvidia_get_rm_ops" },
	{ 0x1000e51, "schedule" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0xa2dc7695, "cdev_add" },
	{ 0x31fb9dca, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce807a25, "up_write" },
	{ 0x55385e2e, "__x86_indirect_thunk_r14" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6626afca, "down" },
	{ 0x4c03a563, "random_kmalloc_seed" },
	{ 0x670ecece, "__x86_indirect_thunk_rbx" },
	{ 0x9166fada, "strncpy" },
	{ 0x1a79c8e9, "__x86_indirect_thunk_r13" },
	{ 0x1edb69d6, "ktime_get_raw_ts64" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xc0d3d03d, "kthread_stop" },
	{ 0x4cb2fea2, "freezing_slow_path" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfb578fc5, "memset" },
	{ 0x31549b2a, "__x86_indirect_thunk_r10" },
	{ 0xe5dab1ad, "param_ops_charp" },
	{ 0x5eaea17e, "kernel_read" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9e3a3ffd, "proc_remove" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8142e62c, "kthread_create_on_node" },
	{ 0xb997da3e, "seq_read" },
	{ 0x999e8297, "vfree" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x156682e3, "param_ops_bool" },
	{ 0x2d42b731, "filp_close" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x56470118, "__warn_printk" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0xe0112fc4, "__x86_indirect_thunk_r9" },
	{ 0x8c1f748, "backlight_device_register" },
	{ 0x7de7bf50, "__acpi_video_get_backlight_type" },
	{ 0xc07351b3, "__SCT__cond_resched" },
	{ 0x3c299c3c, "seq_puts" },
	{ 0x52cb37dc, "single_release" },
	{ 0x59ffeca6, "kmalloc_trace" },
	{ 0x3fd78f3b, "register_chrdev_region" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xb35af14c, "param_ops_int" },
	{ 0xd427b70e, "single_open" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0xf90a1e85, "__x86_indirect_thunk_r8" },
	{ 0xf9a482f9, "msleep" },
	{ 0x5c658724, "cdev_init" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xa63b4eed, "kmalloc_caches" },
	{ 0xd58dd2b1, "cdev_del" },
	{ 0xf079b8f9, "module_layout" },
};

MODULE_INFO(depends, "nvidia,video");


MODULE_INFO(srcversion, "6D438449B8774351A901222");
