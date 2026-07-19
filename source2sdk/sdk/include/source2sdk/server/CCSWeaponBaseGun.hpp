#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CCSWeaponBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1070
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CCSWeaponBaseGun : public source2sdk::server::CCSWeaponBase
        {
        public:
            std::int32_t m_zoomLevel; // 0x1050            
            std::int32_t m_iBurstShotsRemaining; // 0x1054            
            uint8_t _pad1058[0x8]; // 0x1058
            std::int32_t m_silencedModelIndex; // 0x1060            
            bool m_inPrecache; // 0x1064            
            bool m_bNeedsBoltAction; // 0x1065            
            uint8_t _pad1066[0x2]; // 0x1066
            std::int32_t m_nRevolverCylinderIdx; // 0x1068            
            bool m_bSkillReloadAvailable; // 0x106c            
            bool m_bSkillReloadLiftedReloadKey; // 0x106d            
            bool m_bSkillBoltInterruptAvailable; // 0x106e            
            bool m_bSkillBoltLiftedFireKey; // 0x106f            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSWeaponBaseGun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CCSWeaponBaseGun) == 0x1070);
    };
};
