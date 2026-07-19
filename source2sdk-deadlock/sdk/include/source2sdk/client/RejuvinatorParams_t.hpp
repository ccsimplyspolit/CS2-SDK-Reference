#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>

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
        // Standard-layout class: true
        // Size: 0x60
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct RejuvinatorParams_t
        {
        public:
            float m_flRejuvinatorExpirationWarningTiming; // 0x0            
            float m_flRejuvinatorBuffDuration; // 0x4            
            float m_flRejuvinatorDropHeight; // 0x8            
            float m_flRejuvinatorDropDuration; // 0xc            
            float m_flRejuvinatorRebirthDuration[3]; // 0x10            
            uint8_t _pad001c[0x4]; // 0x1c
            // m_TrooperHealthMult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_TrooperHealthMult;
            char m_TrooperHealthMult[0x18]; // 0x20            
            // m_PlayerRespawnMult has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<float> m_PlayerRespawnMult;
            char m_PlayerRespawnMult[0x18]; // 0x38            
            CSoundEventName m_strRejuvPickupSound; // 0x50            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_flRejuvinatorExpirationWarningTiming) == 0x0);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_flRejuvinatorBuffDuration) == 0x4);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_flRejuvinatorDropHeight) == 0x8);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_flRejuvinatorDropDuration) == 0xc);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_flRejuvinatorRebirthDuration) == 0x10);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_TrooperHealthMult) == 0x20);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_PlayerRespawnMult) == 0x38);
        static_assert(offsetof(source2sdk::client::RejuvinatorParams_t, m_strRejuvPickupSound) == 0x50);
        
        static_assert(sizeof(source2sdk::client::RejuvinatorParams_t) == 0x60);
    };
};
