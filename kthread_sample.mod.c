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
	{ 0x9f8b1174, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xd88a6765, __VMLINUX_SYMBOL_STR(send_sig) },
	{ 0x4b06d2e7, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x66de3b3d, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xc4999e4c, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x15ddbdc, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xd79b5a02, __VMLINUX_SYMBOL_STR(allow_signal) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "FD30BC479EA68765EF792F1");
