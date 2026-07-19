#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ParticleIndex_t.hpp"
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseTrigger.hpp"
#include "source2sdk/server/CCitadelMinimapComponent.hpp"

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
        // Size: 0xc28
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "CCitadelMinimapComponent::Storage_t m_CCitadelMinimapComponent"
        // static metadata: MNetworkVarNames "uint8 m_nEnableState"
        #pragma pack(push, 1)
        class CCitadelTriggerMultiCapturePoint : public source2sdk::server::CBaseTrigger
        {
        public:
            uint8_t _pad08e0[0x18]; // 0x8e0
            // metadata: MNetworkEnable
            // metadata: MNetworkUserGroup "CCitadelMinimapComponent"
            // metadata: MNetworkAlias "CCitadelMinimapComponent"
            // metadata: MNetworkTypeAlias "CCitadelMinimapComponent"
            source2sdk::server::CCitadelMinimapComponent m_CCitadelMinimapComponent; // 0x8f8            
            source2sdk::entity2::CEntityIOOutput m_OnBecomeCapturable; // 0x918            
            // m_OnFullyCaptured has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CEntityOutputTemplate<std::int32_t> m_OnFullyCaptured;
            char m_OnFullyCaptured[0x20]; // 0x930            
            CUtlSymbolLarge m_iszGroupName; // 0x950            
            source2sdk::client::ParticleIndex_t m_nEnabledParticle; // 0x958            
            source2sdk::client::ParticleIndex_t m_nPreEnableFX; // 0x95c            
            uint8_t _pad0960[0x2c0]; // 0x960
            // metadata: MNetworkEnable
            // metadata: MNetworkChangeCallback "OnMultiEnableStateChanged"
            std::uint8_t m_nEnableState; // 0xc20            
            uint8_t _pad0c21[0x7];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadelTriggerMultiCapturePoint because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCitadelTriggerMultiCapturePoint) == 0xc28);
    };
};
