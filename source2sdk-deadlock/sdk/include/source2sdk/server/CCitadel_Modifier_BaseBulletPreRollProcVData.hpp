#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CCitadel_Modifier_BaseEventProcVData.hpp"

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
        // Size: 0x880
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MPropertySuppressBaseClassField
        #pragma pack(push, 1)
        class CCitadel_Modifier_BaseBulletPreRollProcVData : public source2sdk::server::CCitadel_Modifier_BaseEventProcVData
        {
        public:
            // metadata: MPropertyDescription "When true, we roll for a proc once per shot and apply that result to all bullets in the shot.  When false, we roll independently for each bullet in the shot."
            bool m_bRollOnceForAllBulletsInAShot; // 0x780            
            uint8_t _pad0781[0x3]; // 0x781
            // metadata: MPropertyDescription "When not rolling once for all shots, what's the max number of times we can proc in a single shot? 0 means no limit."
            float m_flMaxBulletsToProcInShot; // 0x784            
            // metadata: MPropertyDescription "When true, each bullet can apply its proc to any entities hit.  When false, we only apply the first proc to the first entity."
            bool m_bCanProcMultipleTimesFromSameShot; // 0x788            
            // metadata: MPropertyDescription "When true, will only call OnProc if the target hit passes the unit filter."
            bool m_bRequiresTargetFilter; // 0x789            
            // metadata: MPropertyDescription "When false, Proc'd bullets cannot be evaded"
            bool m_bCanBeEvaded; // 0x78a            
            uint8_t _pad078b[0x5]; // 0x78b
            // metadata: MPropertyGroupName "Visuals"
            // m_TracerAdditionParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_TracerAdditionParticle;
            char m_TracerAdditionParticle[0xe0]; // 0x790            
            // metadata: MPropertyStartGroup "Sounds"
            // metadata: MPropertyDescription "Sound to play on the shooter when a bullet rolls a proc when fired."
            CSoundEventName m_OnBulletRolledProcSound; // 0x870            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_BaseBulletPreRollProcVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadel_Modifier_BaseBulletPreRollProcVData) == 0x880);
    };
};
