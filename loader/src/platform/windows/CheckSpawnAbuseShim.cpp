#include <Geode/binding/TriggerEffectDelegate.hpp>// Workaround: bindings main defines checkSpawnAbuse only for Android/iOS
bool TriggerEffectDelegate::checkSpawnAbuse() { return false; }
