#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/entity2/GameTick_t.hpp"
#include "source2sdk/server/FuncMoverMovementSummaryFlags_t.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CPathMover;
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
        // Registered alignment: 0x4
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x20
        // Has Trivial Destructor
        // Construct allowed
        // 
        // static metadata: MGetKV3ClassDefaults
        #pragma pack(push, 1)
        struct FuncMoverMovementSummary_t
        {
        public:
            float flStartT; // 0x0            
            float flEndT; // 0x4            
            std::int32_t nStartNodeIndex; // 0x8            
            std::int32_t nStopNodeIndex; // 0xc            
            std::int32_t nMovementMode; // 0x10            
            source2sdk::server::FuncMoverMovementSummaryFlags_t nFlags; // 0x14            
            source2sdk::entity2::GameTick_t nTick; // 0x18            
            // hPathMover has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathMover> hPathMover;
            char hPathMover[0x4]; // 0x1c            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, flStartT) == 0x0);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, flEndT) == 0x4);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, nStartNodeIndex) == 0x8);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, nStopNodeIndex) == 0xc);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, nMovementMode) == 0x10);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, nFlags) == 0x14);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, nTick) == 0x18);
        static_assert(offsetof(source2sdk::server::FuncMoverMovementSummary_t, hPathMover) == 0x1c);
        
        static_assert(sizeof(source2sdk::server::FuncMoverMovementSummary_t) == 0x20);
    };
};
