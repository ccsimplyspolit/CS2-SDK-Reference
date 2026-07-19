#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadelModifier.hpp"
#include "source2sdk/server/CCitadelModifierVData.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xa50
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCitadel_Modifier_Mirage_SandPhantom_Proc_VData : public source2sdk::server::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
            bool m_bRollOnceForAllBulletsInAShot; // 0x750            
            uint8_t _pad0751[0x3]; // 0x751
            // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
            float m_flMaxBulletsToProcInShot; // 0x754            
            // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
            bool m_bCanProcMultipleTimesFromSameShot; // 0x758            
            // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
            bool m_bRequiresTargetFilter; // 0x759            
            uint8_t _pad075a[0x6]; // 0x75a
            // metadata: MPropertyStartGroup "Modifiers"
            // m_ProcReadyModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_ProcReadyModifier;
            char m_ProcReadyModifier[0x10]; // 0x760            
            // m_PassiveVictimModifier has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEmbeddedSubclass<source2sdk::server::CCitadelModifier> m_PassiveVictimModifier;
            char m_PassiveVictimModifier[0x10]; // 0x770            
            // metadata: MPropertyGroupName "Visuals"
            // m_ProcReadyParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ProcReadyParticle;
            char m_ProcReadyParticle[0xe0]; // 0x780            
            // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
            char m_TracerAdditionParticle[0xe0]; // 0x860            
            // m_ExplodeParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ExplodeParticle;
            char m_ExplodeParticle[0xe0]; // 0x940            
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
            CSoundEventName m_OnBulletRolledProcSound; // 0xa20            
            CSoundEventName m_ProcSound; // 0xa30            
            CSoundEventName m_ExplodeSound; // 0xa40            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_Mirage_SandPhantom_Proc_VData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_Mirage_SandPhantom_Proc_VData) == 0xa50);
    };
};
