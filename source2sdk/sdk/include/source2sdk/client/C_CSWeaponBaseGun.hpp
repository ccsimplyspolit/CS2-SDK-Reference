#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: 0x10
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1d10
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_CSWeaponBaseGun : public source2sdk::client::C_CSWeaponBase
        {
        public:
            std::int32_t m_zoomLevel; // 0x1ce0            
            std::int32_t m_iBurstShotsRemaining; // 0x1ce4            
            std::int32_t m_iSilencerBodygroup; // 0x1ce8            
            uint8_t _pad1cec[0xc]; // 0x1cec
            std::int32_t m_silencedModelIndex; // 0x1cf8            
            bool m_inPrecache; // 0x1cfc            
            bool m_bNeedsBoltAction; // 0x1cfd            
            uint8_t _pad1cfe[0x2]; // 0x1cfe
            std::int32_t m_nRevolverCylinderIdx; // 0x1d00            
            uint8_t _pad1d04[0xc];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_CSWeaponBaseGun because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_CSWeaponBaseGun) == 0x1d10);
    };
};
