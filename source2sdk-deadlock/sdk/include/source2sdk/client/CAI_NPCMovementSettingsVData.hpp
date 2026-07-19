#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/AI_CommonMovementSettings_t.hpp"
#include "source2sdk/client/CAI_CustomMovementGaitSettings.hpp"
#include "source2sdk/client/CAI_MovementGaitSettings.hpp"
#include "source2sdk/client/CAI_NPCMovementStanceSettings_t.hpp"
#include "source2sdk/client/CAI_OptionalMovementGaitSettings.hpp"

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
        // Size: 0x950
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MVDataRoot
        // static metadata: MVDataOverlayType "1"
        #pragma pack(push, 1)
        class CAI_NPCMovementSettingsVData
        {
        public:
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyGroupName "Default Stance"
            source2sdk::client::CAI_MovementGaitSettings m_slow; // 0x0            
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyGroupName "Default Stance"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_medium; // 0xc0            
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyGroupName "Default Stance"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_fast; // 0x180            
            // metadata: MPropertyAutoExpandSelf
            // metadata: MPropertyGroupName "Default Stance"
            source2sdk::client::CAI_OptionalMovementGaitSettings m_veryFast; // 0x240            
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::CAI_NPCMovementStanceSettings_t m_crouchStance; // 0x300            
            // metadata: MPropertyAutoExpandSelf
            source2sdk::client::CAI_NPCMovementStanceSettings_t m_proneStance; // 0x608            
            // m_customGaits has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::CAI_CustomMovementGaitSettings> m_customGaits;
            char m_customGaits[0x18]; // 0x910            
            source2sdk::client::AI_CommonMovementSettings_t m_commonSettings; // 0x928            
            uint8_t _pad094c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_NPCMovementSettingsVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CAI_NPCMovementSettingsVData) == 0x950);
    };
};
