#undef NV_DOM0_KERNEL_PRESENT
#undef NV_VGPU_KVM_BUILD
#undef NV_GRID_BUILD
#undef NV_GRID_BUILD_CSP
#undef NV_GET_USER_PAGES_HAS_ARGS_WRITE_FORCE_VMAS
#undef NV_GET_USER_PAGES_HAS_ARGS_TSK_WRITE_FORCE_VMAS
#undef NV_GET_USER_PAGES_HAS_ARGS_TSK_FLAGS_VMAS
#undef NV_GET_USER_PAGES_HAS_ARGS_FLAGS_VMAS
#define NV_GET_USER_PAGES_HAS_ARGS_FLAGS
#define NV_GET_USER_PAGES_REMOTE_PRESENT
#undef NV_GET_USER_PAGES_REMOTE_HAS_ARGS_TSK_WRITE_FORCE_VMAS
#undef NV_GET_USER_PAGES_REMOTE_HAS_ARGS_TSK_FLAGS_VMAS
#undef NV_GET_USER_PAGES_REMOTE_HAS_ARGS_TSK_FLAGS_LOCKED_VMAS
#undef NV_GET_USER_PAGES_REMOTE_HAS_ARGS_FLAGS_LOCKED_VMAS
#define NV_GET_USER_PAGES_REMOTE_HAS_ARGS_FLAGS_LOCKED
#define NV_PIN_USER_PAGES_PRESENT
#undef NV_PIN_USER_PAGES_HAS_ARGS_VMAS
#define NV_PIN_USER_PAGES_REMOTE_PRESENT
#undef NV_PIN_USER_PAGES_REMOTE_HAS_ARGS_TSK_VMAS
#undef NV_PIN_USER_PAGES_REMOTE_HAS_ARGS_VMAS
#define NV_PM_RUNTIME_AVAILABLE
#define NV_VM_FAULT_T_IS_PRESENT
#define NV_PCI_CLASS_MULTIMEDIA_HD_AUDIO_PRESENT
#define NV_DRM_AVAILABLE
#define NV_VFIO_PCI_CORE_PRESENT
#define NV_MDEV_PRESENT
#define NV_CMD_UPHY_DISPLAY_PORT_INIT_PRESENT
#define NV_CMD_UPHY_DISPLAY_PORT_OFF_PRESENT
#define NV_MEMORY_FAILURE_MF_SW_SIMULATED_DEFINED
#define NV_DRM_ATOMIC_MODESET_AVAILABLE
#define NV_IS_EXPORT_SYMBOL_GPL_refcount_inc 0
#define NV_IS_EXPORT_SYMBOL_GPL_refcount_dec_and_test 0
#define NV_DRM_ALPHA_BLENDING_AVAILABLE
#define NV_IS_EXPORT_SYMBOL_PRESENT_drm_gem_prime_fd_to_handle 1
#define NV_IS_EXPORT_SYMBOL_PRESENT_drm_gem_prime_handle_to_fd 1
#undef NV_MLNX_IB_PEER_MEM_SYMBOLS_PRESENT
// Kernel version:             "6.8.0-49-generic"
