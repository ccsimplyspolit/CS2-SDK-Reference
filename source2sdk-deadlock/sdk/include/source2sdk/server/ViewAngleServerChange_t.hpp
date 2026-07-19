#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/FixAngleSet_t.hpp"

// /////////////////////////////////////////////////////////////
// Module: server
// Created using source2gen - github.com/neverlosecc/source2gen
// /////////////////////////////////////////////////////////////

namespace source2sdk
{
    namespace server
    {
        // Registered alignment: unknown
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x48
        // Has VTable
        // 
        // static metadata: MNetworkVarNames "FixAngleSet_t nType"
        // static metadata: MNetworkVarNames "QAngle qAngle"
        // static metadata: MNetworkVarNames "uint32 nIndex"
        #pragma pack(push, 1)
        struct ViewAngleServerChange_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            source2sdk::client::FixAngleSet_t nType; // 0x30            
            uint8_t _pad0031[0x3]; // 0x31
            // metadata: MNetworkEnable
            // metadata: MNetworkEncoder "qangle_precise"
            QAngle qAngle; // 0x34            
            // metadata: MNetworkEnable
            std::uint32_t nIndex; // 0x40            
            uint8_t _pad0044[0x4];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::ViewAngleServerChange_t, nType) == 0x30);
        static_assert(offsetof(source2sdk::server::ViewAngleServerChange_t, qAngle) == 0x34);
        static_assert(offsetof(source2sdk::server::ViewAngleServerChange_t, nIndex) == 0x40);
        
        static_assert(sizeof(source2sdk::server::ViewAngleServerChange_t) == 0x48);
    };
};
