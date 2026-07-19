#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CCitadelModifierVData.hpp"
#include "source2sdk/client/ERejuvenatorRespawnMechanic.hpp"

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
        // Size: 0x780
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CCitadel_Modifier_RespawnCreditVData : public source2sdk::client::CCitadelModifierVData
        {
        public:
            // metadata: MPropertyStartGroup "Respawn Settings"
            source2sdk::client::ERejuvenatorRespawnMechanic m_eRespawnMechanic; // 0x750            
            // metadata: MPropertySuppressExpr "m_eRespawnMechanic != RejuvenatorRespawnMechanic_FixedDelay"
            // metadata: MPropertyDescription "Respawn time is set to this fixed duration after dying."
            float m_flRespawnDelay; // 0x754            
            // metadata: MPropertyStartGroup "Buff Values"
            float m_flBonusClipSize; // 0x758            
            float m_flBonusFirerate; // 0x75c            
            float m_flBonusHealth; // 0x760            
            float m_flBonusMoveSpeedMeterPerSecond; // 0x764            
            // metadata: MPropertyStartGroup "Sounds"
            CSoundEventName m_sExpireSound; // 0x768            
            // metadata: MPropertyStartGroup "UI Messages"
            std::int32_t m_iMaxMessages; // 0x778            
            float m_flMessageInterval; // 0x77c            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCitadel_Modifier_RespawnCreditVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCitadel_Modifier_RespawnCreditVData) == 0x780);
    };
};
