#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
namespace source2sdk
{
    namespace server
    {
        struct CBasePlayerController;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CHintMessage;
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
        // Alignment: 0x8
        // Standard-layout class: true
        // Size: 0x28
        #pragma pack(push, 1)
        class CHintMessageQueue
        {
        public:
            float m_tmMessageEnd; // 0x0            
            uint8_t _pad0004[0x4]; // 0x4
            // m_messages has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::server::CHintMessage*> m_messages;
            char m_messages[0x18]; // 0x8            
            source2sdk::server::CBasePlayerController* m_pPlayerController; // 0x20            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::CHintMessageQueue, m_tmMessageEnd) == 0x0);
        static_assert(offsetof(source2sdk::server::CHintMessageQueue, m_messages) == 0x8);
        static_assert(offsetof(source2sdk::server::CHintMessageQueue, m_pPlayerController) == 0x20);
        
        static_assert(sizeof(source2sdk::server::CHintMessageQueue) == 0x28);
    };
};
