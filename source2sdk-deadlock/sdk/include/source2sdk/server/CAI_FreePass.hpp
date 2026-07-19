#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/CAI_Component.hpp"
#include "source2sdk/server/AI_FreePassParams_t.hpp"
#include "source2sdk/server/CAI_MoveMonitor.hpp"
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
        // Size: 0x98
        // Has VTable
        #pragma pack(push, 1)
        class CAI_FreePass : public source2sdk::client::CAI_Component
        {
        public:
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CBaseEntity> m_hTarget;
            char m_hTarget[0x4]; // 0x50            
            float m_FreePassTimeRemaining; // 0x54            
            source2sdk::server::CAI_MoveMonitor m_FreePassMoveMonitor; // 0x58            
            source2sdk::server::AI_FreePassParams_t m_Params; // 0x68            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CAI_FreePass because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CAI_FreePass) == 0x98);
    };
};
