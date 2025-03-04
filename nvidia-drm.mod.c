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
	{ 0xb6045ad9, "drm_framebuffer_cleanup" },
	{ 0x7e3277f8, "___drm_dbg" },
	{ 0x330fe056, "drm_kms_helper_poll_fini" },
	{ 0x20c00ee9, "drm_aperture_remove_conflicting_pci_framebuffers" },
	{ 0x2d4bf6b5, "drm_open" },
	{ 0xc31db0ce, "is_vmalloc_addr" },
	{ 0xf1b5340a, "drm_mode_vrefresh" },
	{ 0x24b7d9df, "drm_poll" },
	{ 0x7447c97b, "vmf_insert_pfn" },
	{ 0xfb0ef84a, "drm_mode_object_find" },
	{ 0xaefb5391, "drm_kms_helper_poll_disable" },
	{ 0x8279ee79, "drm_mode_crtc_set_gamma_size" },
	{ 0x4d0d0737, "drm_connector_register" },
	{ 0xdd4d989b, "dma_resv_reserve_fences" },
	{ 0xb11ac7a7, "__drm_err" },
	{ 0x13c49cc2, "_copy_from_user" },
	{ 0x24cf437a, "drm_vma_node_is_allowed" },
	{ 0xb57446f2, "drm_kms_helper_poll_init" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0xc812e7f1, "drm_framebuffer_init" },
	{ 0x279e03c0, "drm_property_create" },
	{ 0x3aaf96ae, "vmalloc_to_page" },
	{ 0x12f8f3f6, "drm_atomic_add_affected_planes" },
	{ 0x14c5b3aa, "drm_modeset_unlock_all" },
	{ 0xa6257a2f, "complete" },
	{ 0x2109f42d, "drm_mode_probed_add" },
	{ 0x7eff93f3, "drm_atomic_add_affected_connectors" },
	{ 0x929a68e6, "drm_atomic_helper_disable_plane" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xaf5d6cb4, "drm_modeset_lock_all" },
	{ 0x653efdf9, "drm_atomic_helper_shutdown" },
	{ 0x559f8ecb, "drm_atomic_state_default_clear" },
	{ 0xcd4dcc73, "__mmap_lock_do_trace_acquire_returned" },
	{ 0xcf2a6966, "up" },
	{ 0xf8916fdf, "drm_connector_atomic_hdr_metadata_equal" },
	{ 0x565f8b0, "ww_mutex_unlock" },
	{ 0xedc03953, "iounmap" },
	{ 0x3912bdfb, "drm_mode_create_hdmi_colorspace_property" },
	{ 0x4a5e4717, "fd_install" },
	{ 0x44bb95d4, "drm_edid_override_connector_update" },
	{ 0x69acdf38, "memcpy" },
	{ 0x322a46d, "dma_resv_add_fence" },
	{ 0xd48e89e4, "drm_helper_hpd_irq_event" },
	{ 0x94961283, "vunmap" },
	{ 0x37a0cba, "kfree" },
	{ 0xb9cad492, "__drm_atomic_state_free" },
	{ 0x1e362ae8, "pcpu_hot" },
	{ 0x14508b8f, "drm_crtc_cleanup" },
	{ 0xcbf648ec, "drm_connector_list_iter_begin" },
	{ 0x4af22436, "drm_gem_create_mmap_offset" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x82ee90dc, "timer_delete_sync" },
	{ 0xf434f068, "__tracepoint_mmap_lock_acquire_returned" },
	{ 0x1084919d, "drm_encoder_cleanup" },
	{ 0x9db774be, "drm_connector_unregister" },
	{ 0xe2964344, "__wake_up" },
	{ 0x628c0f8f, "dma_fence_add_callback" },
	{ 0xa8ba3d00, "drm_modeset_acquire_init" },
	{ 0x3c639c97, "drm_gem_prime_handle_to_fd" },
	{ 0x822cc2a5, "drmm_mode_config_init" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x90228d60, "__tracepoint_mmap_lock_released" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xcbd4898c, "fortify_panic" },
	{ 0xbdfb6dbb, "__fentry__" },
	{ 0x3f4547a7, "put_unused_fd" },
	{ 0x4dd5a22c, "wake_up_process" },
	{ 0x745cd1a, "drm_mode_object_put" },
	{ 0xe4b22963, "drm_gem_object_lookup" },
	{ 0x50d7e117, "drm_crtc_send_vblank_event" },
	{ 0x956a67e2, "drm_connector_attach_encoder" },
	{ 0x48d99ea3, "pin_user_pages" },
	{ 0x65487097, "__x86_indirect_thunk_rax" },
	{ 0x3f6a6518, "drm_master_put" },
	{ 0x122c3a7e, "_printk" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x158c67e0, "drm_gem_private_object_init" },
	{ 0xf0fdf6cb, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x197d5b60, "dma_fence_default_wait" },
	{ 0xb3a4f6b3, "drm_atomic_helper_check" },
	{ 0x52682db1, "__drm_atomic_helper_plane_destroy_state" },
	{ 0x8e1973b4, "drm_atomic_helper_connector_destroy_state" },
	{ 0xa1e146c7, "drm_connector_list_iter_end" },
	{ 0x156ca61b, "drm_atomic_set_crtc_for_plane" },
	{ 0xc57c48a3, "idr_get_next" },
	{ 0x6383b27c, "__x86_indirect_thunk_rdx" },
	{ 0xe94ee78, "drm_mode_create" },
	{ 0xf0bc1817, "drm_property_create_enum" },
	{ 0x528de3c2, "drm_gem_prime_import" },
	{ 0xfc8c4e, "drm_ioctl" },
	{ 0x1eae895f, "drm_plane_cleanup" },
	{ 0x7aeea8e2, "drm_fb_helper_set_suspend_unlocked" },
	{ 0x87a21cb3, "__ubsan_handle_out_of_bounds" },
	{ 0x5f4b5894, "drm_gem_prime_fd_to_handle" },
	{ 0xa1d3789, "drm_atomic_get_crtc_state" },
	{ 0xd680a377, "drm_gem_object_free" },
	{ 0xd8d99bcf, "drm_property_lookup_blob" },
	{ 0x81da4a62, "drm_gem_vm_close" },
	{ 0x9f46ced8, "__sw_hweight64" },
	{ 0xd43a0aa2, "vm_insert_page" },
	{ 0x224a950d, "drm_gem_vm_open" },
	{ 0x5bf7ed00, "drm_property_replace_blob" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x58a1d095, "drm_kms_helper_poll_enable" },
	{ 0x56daa2ba, "drm_connector_init" },
	{ 0x31fb9dca, "fput" },
	{ 0x57bc19d2, "down_write" },
	{ 0xe4d9b037, "drm_modeset_lock_all_ctx" },
	{ 0xce807a25, "up_write" },
	{ 0xc651a76b, "drm_atomic_set_fb_for_plane" },
	{ 0x14605535, "dma_fence_context_alloc" },
	{ 0xfe50e28, "drm_file_get_master" },
	{ 0x587b0954, "kvasprintf" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xdaa799b3, "noop_llseek" },
	{ 0xaacf03c1, "dma_fence_signal" },
	{ 0xf6b304b6, "drm_read" },
	{ 0x54f20985, "drm_connector_set_vrr_capable_property" },
	{ 0x6c3a1c4f, "drm_gem_object_release" },
	{ 0x10d3a5e8, "drm_connector_attach_colorspace_property" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xafb42dc6, "ww_mutex_lock" },
	{ 0x364c23ad, "mutex_is_locked" },
	{ 0x5b5e28a6, "drm_atomic_state_init" },
	{ 0x15540283, "vmap" },
	{ 0xc526cc0, "drm_gem_handle_create" },
	{ 0x8d3d60e, "drm_atomic_set_crtc_for_connector" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0x6d9b5a97, "drm_atomic_helper_plane_reset" },
	{ 0x515b3dca, "drm_crtc_init_with_planes" },
	{ 0xc0d3d03d, "kthread_stop" },
	{ 0xb2298743, "drm_atomic_state_default_release" },
	{ 0x487831b1, "drm_object_attach_property" },
	{ 0x4e0e196b, "drm_helper_mode_fill_fb_struct" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xdeb99119, "dma_fence_init" },
	{ 0x4a35d30d, "drm_mode_set_name" },
	{ 0x521cfdd0, "drm_mode_create_dvi_i_properties" },
	{ 0xc4c90270, "drm_prime_pages_to_sg" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x6bb2ad2, "drm_dev_unregister" },
	{ 0x378fefa3, "drm_atomic_commit" },
	{ 0xd38cd261, "__default_kernel_pte_mask" },
	{ 0xf90e7f78, "drm_atomic_state_alloc" },
	{ 0x7c414cd5, "drm_dev_put" },
	{ 0x3bcd0938, "drm_connector_update_edid_property" },
	{ 0x16c39f3e, "unpin_user_page" },
	{ 0x5fdfb3eb, "drm_plane_create_alpha_property" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x5b8239ca, "__x86_return_thunk" },
	{ 0x2f299107, "drm_atomic_helper_set_config" },
	{ 0x6b10bee1, "_copy_to_user" },
	{ 0xadb60f1b, "drm_fbdev_generic_setup" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x69351a65, "__drm_atomic_helper_crtc_duplicate_state" },
	{ 0xd9fada3c, "drm_atomic_helper_connector_duplicate_state" },
	{ 0x7c0afda9, "__drm_atomic_helper_plane_duplicate_state" },
	{ 0x668b19a1, "down_read" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1aa9457f, "drm_connector_attach_vrr_capable_property" },
	{ 0x41c74579, "drm_atomic_set_mode_prop_for_crtc" },
	{ 0x5b2b916d, "drm_connector_cleanup" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x8142e62c, "kthread_create_on_node" },
	{  0x710c3, "drm_universal_plane_init" },
	{ 0x8e6e1204, "drm_atomic_helper_crtc_reset" },
	{ 0x58458b2, "__mmap_lock_do_trace_start_locking" },
	{ 0x36fe122c, "__drm_atomic_helper_crtc_destroy_state" },
	{ 0xdcbc5832, "drm_crtc_enable_color_mgmt" },
	{ 0xc7910e38, "drm_vma_offset_lookup_locked" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x97651e6c, "vmemmap_base" },
	{ 0xa648e561, "__ubsan_handle_shift_out_of_bounds" },
	{ 0xf1356a54, "drm_mode_create_dp_colorspace_property" },
	{ 0x71578654, "drm_connector_list_iter_next" },
	{ 0x17a073d5, "drm_object_property_set_value" },
	{ 0x9ea14e36, "drm_modeset_acquire_fini" },
	{ 0x564f1f22, "drm_encoder_init" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x45487365, "drm_kms_helper_hotplug_event" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x156682e3, "param_ops_bool" },
	{ 0xa843805a, "get_unused_fd_flags" },
	{ 0x2dc671f2, "__tracepoint_mmap_lock_start_locking" },
	{ 0x19e7f00b, "nvKmsKapiGetFunctionsTable" },
	{ 0x66cca4f9, "__x86_indirect_thunk_rcx" },
	{ 0x56470118, "__warn_printk" },
	{ 0x11f59361, "drm_gem_mmap_obj" },
	{ 0x387dea97, "drm_helper_probe_single_connector_modes" },
	{ 0xdf5593ac, "__mmap_lock_do_trace_released" },
	{ 0x6bd0e573, "down_interruptible" },
	{ 0x3c46619, "drm_plane_create_rotation_property" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x6f7ffbd6, "drm_modeset_backoff" },
	{ 0x5e4e0f5c, "set_page_dirty_lock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x5a8aabe0, "drm_atomic_get_plane_state" },
	{ 0x70faae26, "drm_atomic_helper_swap_state" },
	{ 0xb0c16e1f, "drm_property_blob_get" },
	{ 0x1cdcaa1d, "drm_property_blob_put" },
	{ 0xd8aa1a85, "drm_atomic_helper_page_flip" },
	{ 0x8b866834, "drm_atomic_helper_connector_reset" },
	{ 0x79d8d52b, "drm_mode_config_reset" },
	{ 0x55eb38da, "drm_format_info" },
	{ 0xc12f137c, "drm_plane_create_blend_mode_property" },
	{ 0x16e4693b, "drm_modeset_drop_locks" },
	{ 0x4982768, "drm_mode_config_cleanup" },
	{ 0xe123f3d9, "dma_fence_release" },
	{ 0x54b1fac6, "__ubsan_handle_load_invalid_value" },
	{ 0x754d539c, "strlen" },
	{ 0xc008d70d, "drm_dev_alloc" },
	{ 0xfd93ee35, "ioremap_wc" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x78df90b8, "drm_connector_attach_hdr_output_metadata_property" },
	{ 0xc173ca3c, "drm_atomic_helper_update_plane" },
	{ 0x53b954a2, "up_read" },
	{ 0x7155bcf8, "sync_file_get_fence" },
	{ 0xfa42f689, "drm_compat_ioctl" },
	{ 0x1c7210e9, "drm_dev_register" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xe2c17b5d, "__SCT__might_resched" },
	{ 0xda4fc35d, "pci_bus_type" },
	{ 0x1c8a19c7, "drm_atomic_get_connector_state" },
	{ 0x7c0d73b9, "sync_file_create" },
	{ 0x7a74b72f, "drm_prime_gem_destroy" },
	{ 0x4e8cc3da, "drm_release" },
	{ 0x498814a6, "drm_gem_prime_export" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xf079b8f9, "module_layout" },
};

MODULE_INFO(depends, "nvidia-modeset");

MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc00i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc03sc02i00*");
MODULE_ALIAS("pci:v000010DEd*sv*sd*bc06sc80i00*");

MODULE_INFO(srcversion, "19E9CD5F88B4C58319C35C7");
