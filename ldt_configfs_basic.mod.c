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
	{ 0x73074eac, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x7241da83, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0xac7f6dfd, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3c7636ea, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2276db98, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xbdfb6dbb, __VMLINUX_SYMBOL_STR(__fentry__) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=configfs";


MODULE_INFO(srcversion, "FEBF4A2FF6741948EABE590");
