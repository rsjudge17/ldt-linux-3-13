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
	{ 0x4d802826, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x62b3cb77, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xf087137d, __VMLINUX_SYMBOL_STR(__dynamic_pr_debug) },
	{ 0xdef909b2, __VMLINUX_SYMBOL_STR(__dynamic_dev_dbg) },
	{ 0xb6573770, __VMLINUX_SYMBOL_STR(platform_get_resource) },
	{ 0xa7e2f5bd, __VMLINUX_SYMBOL_STR(platform_get_irq) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Clinux-driver-template*");

MODULE_INFO(srcversion, "166013439834C1C7B580C06");
