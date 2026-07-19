#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
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
        // Size: 0xcd0
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CModifierStormCloudVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Visuals"
            // m_ZapFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapFriendly;
            char m_ZapFriendly[0xe0]; // 0x750            
            // m_DrawFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawFriendly;
            char m_DrawFriendly[0xe0]; // 0x830            
            // m_AoEFriendly has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEFriendly;
            char m_AoEFriendly[0xe0]; // 0x910            
            // m_ZapEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_ZapEnemy;
            char m_ZapEnemy[0xe0]; // 0x9f0            
            // m_DrawEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_DrawEnemy;
            char m_DrawEnemy[0xe0]; // 0xad0            
            // m_AoEEnemy has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition>> m_AoEEnemy;
            char m_AoEEnemy[0xe0]; // 0xbb0            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_strChannelEndingSoonSound; // 0xc90            
            CSoundEventName m_strChannelFinishedSound; // 0xca0            
            CSoundEventName m_strDamageRecievedSound; // 0xcb0            
            CSoundEventName m_strAmbientZapSound; // 0xcc0            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CModifierStormCloudVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CModifierStormCloudVData) == 0xcd0);
    };
};
