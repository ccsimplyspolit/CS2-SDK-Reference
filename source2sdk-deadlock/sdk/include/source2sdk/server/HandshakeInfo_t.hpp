#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/animgraphlib/HandshakeTagState_t.hpp"
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/HandshakeState_t.hpp"
#include "source2sdk/server/TaskHandshakeScope_t.hpp"

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
        // Size: 0x18
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct HandshakeInfo_t
        {
        public:
            CGlobalSymbol m_sHandshakeName; // 0x0            
            std::uint64_t m_nActiveEventUniqueID; // 0x8            
            source2sdk::entity2::GameTick_t m_nLastHandshakeUpdateTick; // 0x10            
            source2sdk::server::HandshakeState_t m_nHandshakeState; // 0x14            
            source2sdk::animgraphlib::HandshakeTagState_t m_nAG2EmulatedState; // 0x15            
            source2sdk::server::TaskHandshakeScope_t m_nHandshakeScope; // 0x16            
            bool m_bForceHandshakeRestartOnScriptedSequenceCompletion; // 0x17            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_sHandshakeName) == 0x0);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nActiveEventUniqueID) == 0x8);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nLastHandshakeUpdateTick) == 0x10);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nHandshakeState) == 0x14);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nAG2EmulatedState) == 0x15);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_nHandshakeScope) == 0x16);
        static_assert(offsetof(source2sdk::server::HandshakeInfo_t, m_bForceHandshakeRestartOnScriptedSequenceCompletion) == 0x17);
        
        static_assert(sizeof(source2sdk::server::HandshakeInfo_t) == 0x18);
    };
};
