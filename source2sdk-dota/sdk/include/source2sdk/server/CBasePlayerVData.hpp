#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CEntitySubclassVDataBase.hpp"
#include "source2sdk/client/CSkillFloat.hpp"
#include "source2sdk/resourcesystem/InfoForResourceTypeCModel.hpp"

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
        // Size: 0x258
        // Has VTable
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        class CBasePlayerVData : public source2sdk::client::CEntitySubclassVDataBase
        {
        public:
            // metadata: MPropertyProvidesEditContextString
            // m_sModelName has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelName;
            char m_sModelName[0xe0]; // 0x28            
            // metadata: MPropertyProvidesEditContextString
            // m_sModelNameAg2Override has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CResourceNameTyped<CWeakHandle<source2sdk::resourcesystem::InfoForResourceTypeCModel>> m_sModelNameAg2Override;
            char m_sModelNameAg2Override[0xe0]; // 0x108            
            source2sdk::client::CSkillFloat m_flHeadDamageMultiplier; // 0x1e8            
            source2sdk::client::CSkillFloat m_flChestDamageMultiplier; // 0x1f8            
            source2sdk::client::CSkillFloat m_flStomachDamageMultiplier; // 0x208            
            source2sdk::client::CSkillFloat m_flArmDamageMultiplier; // 0x218            
            source2sdk::client::CSkillFloat m_flLegDamageMultiplier; // 0x228            
            // metadata: MPropertyGroupName "Water"
            float m_flHoldBreathTime; // 0x238            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Seconds between drowning ticks"
            float m_flDrowningDamageInterval; // 0x23c            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Amount of damage done on the first drowning tick (+1 each subsequent interval)"
            std::int32_t m_nDrowningDamageInitial; // 0x240            
            // metadata: MPropertyGroupName "Water"
            // metadata: MPropertyDescription "Max damage done by a drowning tick"
            std::int32_t m_nDrowningDamageMax; // 0x244            
            // metadata: MPropertyGroupName "Water"
            std::int32_t m_nWaterSpeed; // 0x248            
            // metadata: MPropertyGroupName "Use"
            float m_flUseRange; // 0x24c            
            // metadata: MPropertyGroupName "Use"
            float m_flUseAngleTolerance; // 0x250            
            // metadata: MPropertyGroupName "Crouch"
            // metadata: MPropertyDescription "Time to move between crouch and stand"
            float m_flCrouchTime; // 0x254            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBasePlayerVData because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBasePlayerVData) == 0x258);
    };
};
