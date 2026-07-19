#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/client/C_BaseEntity.hpp"
#include "source2sdk/client/InGamePredictionData_t.hpp"
#include "source2sdk/client/LeagueID_t.hpp"

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
        // Standard-layout class: false
        // Size: 0x680
        // Has VTable
        // Construct allowed
        // MClassHasEntityLimitedDataDesc
        #pragma pack(push, 1)
        class CDOTAInGamePredictionState : public source2sdk::client::C_BaseEntity
        {
        public:
            bool m_bVotingClosed; // 0x5f0            
            bool m_bAllPredictionsFinished; // 0x5f1            
            uint8_t _pad05f2[0x6]; // 0x5f2
            // m_vecPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // C_UtlVectorEmbeddedNetworkVar<source2sdk::client::InGamePredictionData_t> m_vecPredictions;
            char m_vecPredictions[0x68]; // 0x5f8            
            source2sdk::client::LeagueID_t m_nLeagueID; // 0x660            
            uint8_t _pad0664[0x4]; // 0x664
            // m_vecPrevPredictions has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CUtlVector<source2sdk::client::InGamePredictionData_t> m_vecPrevPredictions;
            char m_vecPrevPredictions[0x18]; // 0x668            
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CDOTAInGamePredictionState because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::client::CDOTAInGamePredictionState) == 0x680);
    };
};
