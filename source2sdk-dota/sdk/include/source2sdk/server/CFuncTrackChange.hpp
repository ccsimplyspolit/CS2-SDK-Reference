#pragma once

#include "source2sdk/source2gen/source2gen.hpp"
#include <cstddef>
#include <cstdint>
#include "source2sdk/server/CFuncPlatRot.hpp"
#include "source2sdk/server/TRAIN_CODE.hpp"
namespace source2sdk
{
    namespace server
    {
        struct CFuncTrackTrain;
    };
};
namespace source2sdk
{
    namespace server
    {
        struct CPathTrack;
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
        // Size: 0x880
        // Has VTable
        // Construct allowed
        #pragma pack(push, 1)
        class CFuncTrackChange : public source2sdk::server::CFuncPlatRot
        {
        public:
            // metadata: MSaveBehavior
            // m_trackTop has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_trackTop;
            char m_trackTop[0x4]; // 0x848            
            // metadata: MSaveBehavior
            // m_trackBottom has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CPathTrack> m_trackBottom;
            char m_trackBottom[0x4]; // 0x84c            
            // metadata: MSaveBehavior
            // m_train has a template type with potentially unknown template parameters. You can try uncommenting the field below.
            // CHandle<source2sdk::server::CFuncTrackTrain> m_train;
            char m_train[0x4]; // 0x850            
            uint8_t _pad0854[0x4]; // 0x854
            // metadata: MSaveBehavior
            CUtlSymbolLarge m_trackTopName; // 0x858            
            // metadata: MSaveBehavior
            CUtlSymbolLarge m_trackBottomName; // 0x860            
            // metadata: MSaveBehavior
            CUtlSymbolLarge m_trainName; // 0x868            
            source2sdk::server::TRAIN_CODE m_code; // 0x870            
            std::int32_t m_targetState; // 0x874            
            std::int32_t m_use; // 0x878            
            uint8_t _pad087c[0x4];
        };
        #pragma pack(pop)
        
        // Cannot assert offsets of fields in CFuncTrackChange because it is not a standard-layout class
        
        static_assert(sizeof(source2sdk::server::CFuncTrackChange) == 0x880);
    };
};
