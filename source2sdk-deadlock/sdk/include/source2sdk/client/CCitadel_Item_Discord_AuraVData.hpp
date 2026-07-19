#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierAuraVData.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0xb28
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Item_Discord_AuraVData : public source2sdk::client::CCitadelModifierAuraVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_strAreaEffectEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectEnemy;
            char m_strAreaEffectEnemy[0xe0]; // 0x7a8            
            // m_strAreaEffectFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectFriendly;
            char m_strAreaEffectFriendly[0xe0]; // 0x888            
            // m_strAreaEffectSelf has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_strAreaEffectSelf;
            char m_strAreaEffectSelf[0xe0]; // 0x968            
            // m_DrainParticle has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrainParticle;
            char m_DrainParticle[0xe0]; // 0xa48            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Item_Discord_AuraVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Item_Discord_AuraVData) == 0xb28);
    };
};
