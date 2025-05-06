#include "plugin.hpp"

#if defined(METAMODULE_BUILTIN)
extern Plugin* pluginInstance;
#else
Plugin* pluginInstance;
#endif

#if defined(METAMODULE_BUILTIN)
void init_Ondas(Plugin* p) {
#else
void init(Plugin* p) {
#endif
	pluginInstance = p;

	p->addModel(modelKlok);
	p->addModel(modelSecu);
	p->addModel(modelBaBum);
	p->addModel(modelScener);
	p->addModel(modelDistroi);
}
