#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace client
    {
        struct C_BaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x38
        // Has VTable
        // 
        // static metadata: MGetKV3ClassDefaults
        // static metadata: MNetworkVarNames "EHANDLE m_hTarget"
        // static metadata: MNetworkVarNames "uint8 m_nMarks"
        #pragma pack(push, 1)
        struct AirheartLockOnTarget_t
        {
        public:
            uint8_t _pad0000[0x30]; // 0x0
            // metadata: MNetworkEnable
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::client::C_BaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x30            
            // metadata: MNetworkEnable
            std::uint8_t m_nMarks; // 0x34            
            uint8_t _pad0035[0x3];
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::client::AirheartLockOnTarget_t, m_hTarget) == 0x30);
        static_assert(offsetof(source2sdk::client::AirheartLockOnTarget_t, m_nMarks) == 0x34);
        
        static_assert(sizeof(source2sdk::client::AirheartLockOnTarget_t) == 0x38);
    };
};
