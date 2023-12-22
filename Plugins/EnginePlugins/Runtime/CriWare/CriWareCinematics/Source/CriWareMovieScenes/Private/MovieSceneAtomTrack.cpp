#include "MovieSceneAtomTrack.h"

#include "Evaluation/MovieSceneEvalTemplate.h"

UMovieSceneAtomTrack::UMovieSceneAtomTrack() {
}

FMovieSceneEvalTemplatePtr UMovieSceneAtomTrack::CreateTemplateForSection(const UMovieSceneSection& InSection) const
{
	return FMovieSceneEvalTemplatePtr();
}


