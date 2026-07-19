#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/resourcesystem/InfoForResourceTypeIParticleSystemDefinition.hpp"
#include "source2sdk/server/CParticleSystem.hpp"

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
        // Size: 0xd18
        // Has VTable
        // 
        // static metadata: MNetworkExcludeByName "m_iEffectIndex"
        // static metadata: MNetworkIncludeByName "m_iTeamNum"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iFriendlyEffectIndex"
        // static metadata: MNetworkVarNames "HParticleSystemDefinitionStrong m_iEnemyEffectIndex"
        #pragma pack(push, 1)
        class CTeamRelativeParticleSystem : public source2sdk::server::CParticleSystem
        {
        public:
            CUtlSymbolLarge m_iszFriendlyEffectName; // 0xcf8            
            CUtlSymbolLarge m_iszEnemyEffectName; // 0xd00            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_iFriendlyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iFriendlyEffectIndex;
            char m_iFriendlyEffectIndex[0x8]; // 0xd08            
            // metadata: MNetworkEnable
            // metadata: MNotSaved
            // m_iEnemyEffectIndex has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeIParticleSystemDefinition> m_iEnemyEffectIndex;
            char m_iEnemyEffectIndex[0x8]; // 0xd10            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CTeamRelativeParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CTeamRelativeParticleSystem) == 0xd18);
    };
};
