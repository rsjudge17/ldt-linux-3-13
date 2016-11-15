#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x1fc32c62, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xb6b46a7c, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0x594bf15b, __VMLINUX_SYMBOL_STR(ioport_map) },
	{ 0x2072ee9b, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xb51df09a, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xa02cd72d, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x7532588a, __VMLINUX_SYMBOL_STR(alloc_pages_exact) },
	{ 0xac7f6dfd, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf432dd3d, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1a236d64, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6a4bf290, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x7c61340c, __VMLINUX_SYMBOL_STR(__release_region) },
	{ 0xff7559e4, __VMLINUX_SYMBOL_STR(ioport_resource) },
	{ 0xfc39e32f, __VMLINUX_SYMBOL_STR(ioport_unmap) },
	{ 0xeb44339a, __VMLINUX_SYMBOL_STR(free_pages_exact) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xac96c6d4, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x36757b7d, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x30a80826, __VMLINUX_SYMBOL_STR(__kfifo_from_user) },
	{ 0xbf2a314d, __VMLINUX_SYMBOL_STR(remap_pfn_range) },
	{ 0x4c9d28b0, __VMLINUX_SYMBOL_STR(phys_base) },
	{ 0x6a39e9dd, __VMLINUX_SYMBOL_STR(current_task) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfa66f77c, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x34f22f94, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x4578f528, __VMLINUX_SYMBOL_STR(__kfifo_to_user) },
	{ 0xf10de535, __VMLINUX_SYMBOL_STR(ioread8) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x727c4f3, __VMLINUX_SYMBOL_STR(iowrite8) },
	{ 0xcf21d241, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x8f64aa4, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x9327f5ce, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xfb578fc5, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x69acdf38, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4f6b400b, __VMLINUX_SYMBOL_STR(_copy_from_user) },
	{ 0x1eecf3fc, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x4f8b5ddb, __VMLINUX_SYMBOL_STR(_copy_to_user) },
	{ 0x9c73f8e4, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FF849261F0C91D304EE970D");
