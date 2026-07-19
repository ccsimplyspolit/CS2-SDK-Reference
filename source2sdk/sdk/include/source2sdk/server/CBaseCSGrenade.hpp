#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
#include "source2sdk/server/CCSWeaponBase.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCSWeaponBase;
    };
};

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x10
        // Standard-layout class: false
        // Size: 0x1090
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CBaseCSGrenade : public source2sdk::server::CCSWeaponBase
        {
        public:
            bool m_bRedraw; // 0x1050            
            bool m_bIsHeldByPlayer; // 0x1051            
            bool m_bPinPulled; // 0x1052            
            bool m_bJumpThrow; // 0x1053            
            bool m_bThrowAnimating; // 0x1054            
            uint8_t _pad1055[0x3]; // 0x1055
            source2sdk::entity2::GameTime_t m_fThrowTime; // 0x1058            
            float m_flThrowStrength; // 0x105c            
            source2sdk::entity2::GameTime_t m_fDropTime; // 0x1060            
            source2sdk::entity2::GameTime_t m_fPinPullTime; // 0x1064            
            bool m_bJustPulledPin; // 0x1068            
            uint8_t _pad1069[0x3]; // 0x1069
            source2sdk::entity2::GameTick_t m_nNextHoldTick; // 0x106c            
            float m_flNextHoldFrac; // 0x1070            
            // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCSWeaponBase> m_hSwitchToWeaponAfterThrow;
            char m_hSwitchToWeaponAfterThrow[0x4]; // 0x1074            
            uint8_t _pad1078[0x18];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CBaseCSGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CBaseCSGrenade) == 0x1090);
    };
};
