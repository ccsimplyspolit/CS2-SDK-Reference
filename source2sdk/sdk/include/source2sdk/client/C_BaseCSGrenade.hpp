#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_CSWeaponBase.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/entity2/GameTime_t.hpp"
namespace source2sdk
{
    namespace client
    {
        struct C_CSWeaponBase;
    };
};

// /////////////////////////////////////////////////////////////
// Module: client
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace client
    {
        // Registered alignment: unknown
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x1da0
        // Has VTable
        // Construct disallowed
        // MConstructibleClassBase
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class C_BaseCSGrenade : public source2sdk::client::C_CSWeaponBase
        {
        public:
            bool m_bClientPredictDelete; // 0x1ce0            
            bool m_bRedraw; // 0x1ce1            
            bool m_bIsHeldByPlayer; // 0x1ce2            
            bool m_bPinPulled; // 0x1ce3            
            bool m_bJumpThrow; // 0x1ce4            
            bool m_bThrowAnimating; // 0x1ce5            
            uint8_t _pad1ce6[0x2]; // 0x1ce6
            source2sdk::entity2::GameTime_t m_fThrowTime; // 0x1ce8            
            uint8_t _pad1cec[0x4]; // 0x1cec
            float m_flThrowStrength; // 0x1cf0            
            uint8_t _pad1cf4[0x74]; // 0x1cf4
            source2sdk::entity2::GameTime_t m_fDropTime; // 0x1d68            
            source2sdk::entity2::GameTime_t m_fPinPullTime; // 0x1d6c            
            bool m_bJustPulledPin; // 0x1d70            
            uint8_t _pad1d71[0x3]; // 0x1d71
            source2sdk::entity2::GameTick_t m_nNextHoldTick; // 0x1d74            
            float m_flNextHoldFrac; // 0x1d78            
            // m_hSwitchToWeaponAfterThrow has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_CSWeaponBase> m_hSwitchToWeaponAfterThrow;
            char m_hSwitchToWeaponAfterThrow[0x4]; // 0x1d7c            
            uint8_t _pad1d80[0x20];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in C_BaseCSGrenade because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::C_BaseCSGrenade) == 0x1da0);
    };
};
