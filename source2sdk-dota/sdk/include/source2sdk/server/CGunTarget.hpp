#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/CEntityIOOutput.hpp"
#include "source2sdk/server/CBaseToggle.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CBaseEntity;
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
        // Registered alignment: 0x8
        // Alignment: 0x8
        // Standard-layout class: false
        // Size: 0x820
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CGunTarget : public source2sdk::server::CBaseToggle
        {
        public:
            float m_flSpeed; // 0x7f8            
            bool m_on; // 0x7fc            
            uint8_t _pad07fd[0x3]; // 0x7fd
            // m_hTargetEnt has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTargetEnt;
            char m_hTargetEnt[0x4]; // 0x800            
            uint8_t _pad0804[0x4]; // 0x804
            source2sdk::entity2::CEntityIOOutput m_OnDeath; // 0x808            
            
            // Datamap fields:
            // void InputStart; // 0x0
            // void InputStop; // 0x0
            // void InputToggle; // 0x0
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CGunTarget because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CGunTarget) == 0x820);
    };
};
