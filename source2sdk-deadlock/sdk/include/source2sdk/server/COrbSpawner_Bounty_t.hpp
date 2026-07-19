#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/ECurrencySource.hpp"
#include "source2sdk/client/EDenyDistributionType.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CCitadelPlayerPawn;
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
        // Alignment: 0x4
        // Standard-layout class: true
        // Size: 0x14
        // Has Trivial Destructor
        #pragma pack(push, 1)
        struct COrbSpawner_Bounty_t
        {
        public:
            std::int32_t m_nGoldToGive; // 0x0            
            std::int32_t m_nNumOrbs; // 0x4            
            source2sdk::client::EDenyDistributionType m_eDenyType; // 0x8            
            source2sdk::client::ECurrencySource m_eSource; // 0xc            
            // m_hTarget has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CCitadelPlayerPawn> m_hTarget;
            char m_hTarget[0x4]; // 0x10            
        };
        #pragma pack(pop)
        
        static_assert(offsetof(source2sdk::server::COrbSpawner_Bounty_t, m_nGoldToGive) == 0x0);
        static_assert(offsetof(source2sdk::server::COrbSpawner_Bounty_t, m_nNumOrbs) == 0x4);
        static_assert(offsetof(source2sdk::server::COrbSpawner_Bounty_t, m_eDenyType) == 0x8);
        static_assert(offsetof(source2sdk::server::COrbSpawner_Bounty_t, m_eSource) == 0xc);
        static_assert(offsetof(source2sdk::server::COrbSpawner_Bounty_t, m_hTarget) == 0x10);
        
        static_assert(sizeof(source2sdk::server::COrbSpawner_Bounty_t) == 0x14);
    };
};
