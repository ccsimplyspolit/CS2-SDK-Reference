#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CPlayer_ObserverServices.hpp"
#include "source2sdk/client/ObserverInterpState_t.hpp"

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
        // Size: 0xf0
        // Has VTable
        #pragma pack(push, 1)
        class CCSObserver_ObserverServices : public source2sdk::client::CPlayer_ObserverServices
        {
        public:
            uint8_t _pad0060[0x8]; // 0x60
            source2sdk::client::ObserverInterpState_t m_obsInterpState; // 0x68            
            uint8_t _pad006c[0x84];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CCSObserver_ObserverServices because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CCSObserver_ObserverServices) == 0xf0);
    };
};
