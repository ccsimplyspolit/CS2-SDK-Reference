#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animationsystem/HSequence.hpp"
#include "source2sdk/client/C_BaseModelEntity.hpp"
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0xad0
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        // 
        // static metadata: MEntityAllowsPortraitWorldSpawn
        #pragma pack(push, 1)
        class C_DOTAWorldParticleSystem : public source2sdk::client::C_BaseModelEntity
        {
        public:
            std::int32_t m_nType; // 0xa88            
            source2sdk::client::ParticleIndex_t m_iClientEffectIndex; // 0xa8c            
            CUtlSymbolLarge m_szEffectName; // 0xa90            
            CUtlSymbolLarge m_szTargetName; // 0xa98            
            CUtlSymbolLarge m_szControlPoint; // 0xaa0            
            source2sdk::animationsystem::HSequence m_hOverrideSequence; // 0xaa8            
            uint8_t _pad0aac[0x4]; // 0xaac
            // m_hOverrideModel has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CStrongHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel> m_hOverrideModel;
            char m_hOverrideModel[0x8]; // 0xab0            
            Vector m_vModelScale; // 0xab8            
            std::int32_t m_nSkinOverride; // 0xac4            
            bool m_bDayTime; // 0xac8            
            bool m_bNightTime; // 0xac9            
            bool m_bShowInFow; // 0xaca            
            bool m_bShowWhileDynamicWeatherActive; // 0xacb            
            bool m_bAnimateDuringGameplayPause; // 0xacc            
            uint8_t _pad0acd[0x3];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_DOTAWorldParticleSystem because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_DOTAWorldParticleSystem) == 0xad0);
    };
};
