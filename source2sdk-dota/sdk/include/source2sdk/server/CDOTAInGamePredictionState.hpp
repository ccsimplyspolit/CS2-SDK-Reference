#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/LeagueID_t.hpp"
#include "source2sdk/server/CBaseEntity.hpp"
#include "source2sdk/server/InGamePredictionData_t.hpp"

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
        // Size: 0x510
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAInGamePredictionState : public source2sdk::server::CBaseEntity
        {
        public:
            bool m_bVotingClosed; // 0x498            
            bool m_bAllPredictionsFinished; // 0x499            
            uint8_t _pad049a[0x6]; // 0x49a
            // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVectorEmbeddedNetworkVar<source2sdk::server::InGamePredictionData_t> m_vecPredictions;
            char m_vecPredictions[0x68]; // 0x4a0            
            source2sdk::client::LeagueID_t m_nLeagueID; // 0x508            
            uint8_t _pad050c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CDOTAInGamePredictionState) == 0x510);
    };
};
